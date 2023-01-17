// vim:ts=4:sw=4:noet:
#ifndef __GX_PLATFORM_MSWIN_H__
#define __GX_PLATFORM_MSWIN_H__ 1
#ifdef _WIN32

#include "lv2/lv2plug.in/ns/lv2core/lv2.h"
#include "lv2/lv2plug.in/ns/extensions/ui/ui.h"

#include <stdio.h>
#include <windows.h>
#include <windowsx.h>
#include <cairo-win32.h>

#include <gui/gx_gui.h>

// forward declarations
void SetClientSize(HWND hwnd, int clientWidth, int clientHeight);
BOOL SetMouseTracking(HWND hwnd, BOOL enable);
LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam);
LRESULT onPaint( HWND hwnd, WPARAM wParam, LPARAM lParam );

/*---------------------------------------------------------------------
-----------------------------------------------------------------------
			common functions (required)
-----------------------------------------------------------------------
----------------------------------------------------------------------*/

bool gx_gui_open_display(gx_ampegsvtUI *ui) {
	return true; // STUB
}

void gx_gui_create_window_and_surface(gx_ampegsvtUI *ui) {
	// prepare window class
	static TCHAR szClassName[] = TEXT("gx_ampegsvtUIClass");
	WNDCLASS wndclass = {0};
	HINSTANCE hInstance = NULL;

	wndclass.style		   = CS_HREDRAW | CS_VREDRAW; // clear on resize
	wndclass.lpfnWndProc   = WndProc;
	wndclass.hInstance	   = hInstance;
	wndclass.hCursor	   = LoadCursor(NULL, IDC_ARROW);
	wndclass.hbrBackground =(HBRUSH)COLOR_WINDOW;
	wndclass.lpszClassName = szClassName;
	wndclass.cbWndExtra    = sizeof(ui); // reserve space for SetWindowLongPtr
	RegisterClass(&wndclass);
	// create the window
	ui->win = CreateWindowEx(WS_EX_TOPMOST, // dwExStyle
							szClassName, // lpClassName
							TEXT("Draw Surface"), // lpWindowName
							(WS_CHILD | WS_VISIBLE), // dwStyle
							CW_USEDEFAULT, CW_USEDEFAULT, // X, Y
							ui->width, ui->height, // nWidth, nHeight
							(HWND)ui->parentWindow, // hWndParent (no embeddeding takes place yet)
							NULL, hInstance, NULL); // hMenu, hInstance, lpParam
													//
	// attach a pointer to "ui" to this window (so ui is available in WndProc)
	SetWindowLongPtr(ui->win, GWLP_USERDATA, (LONG_PTR)ui);
	SetParent(ui->win, (HWND)ui->parentWindow); // embed into parentWindow
	ShowWindow(ui->win, SW_SHOW);
	SetClientSize(ui->win, ui->width, ui->height);
	SetMouseTracking(ui->win, true); // for receiving WM_MOUSELEAVE

	// create a permanent surface for drawing (see onPaint() event)
	ui->surface = cairo_image_surface_create(CAIRO_FORMAT_ARGB32, ui->width, ui->height); 
}

void gx_gui_register_controller_message(gx_ampegsvtUI *ui) {
	// dummy, not required on MSWin
}

void gx_gui_destroy_main_window(gx_ampegsvtUI *ui) {
	DestroyWindow(ui->win);
	// safe to use: doesnt unregister if there are still windows of this class
	UnregisterClass(TEXT("gx_ampegsvtUIClass"), NULL);
}

void gx_gui_resize_surface(gx_ampegsvtUI *ui) {
	RECT rect;

	GetClientRect(ui->parentWindow, &rect);
	ui->width = rect.right - rect.left;
	ui->height = rect.bottom - rect.top;
	SetClientSize(ui->win, ui->width, ui->height);
	// image_surface cant be resized (only xlib_surface can)
	cairo_destroy(ui->cr);
	cairo_surface_destroy(ui->surface);
	ui->surface = cairo_image_surface_create(CAIRO_FORMAT_ARGB32, ui->width, ui->height); 
	ui->cr = cairo_create(ui->surface);
}

void gx_gui_send_controller_event(gx_ampegsvtUI *ui, int controller) {
	// On X11 this sends a Window-Message (which is received by polling
	// the eventloop inside the plugins (idle) event_handler).
	// This could be simulated using a registered Window-Message (in conjunction
	// with a buffered message polling to have GUI interactions only from
	// inside the idle event_handler.
	controller_expose(ui, &ui->controls[controller]);
	RedrawWindow(ui->win, NULL, NULL, RDW_NOERASE | RDW_INVALIDATE | RDW_UPDATENOW);
}

/*---------------------------------------------------------------------
-----------------------------------------------------------------------	
			private functions
-----------------------------------------------------------------------
----------------------------------------------------------------------*/

// map supported key's to integers or return zerro
static int key_mapping(WPARAM keycode) {
	// cursor keys currently dont work, as they move the focus to a different control
	if (keycode == VK_TAB)
		return (GetKeyState(VK_SHIFT)) ? 1 : 2;
	else if (keycode == VK_UP)
		return 3;
	else if (keycode == VK_RIGHT)
		return 3;
	else if (keycode == VK_DOWN)
		return 4;
	else if (keycode == VK_LEFT)
		return 4;
	else if (keycode == VK_HOME)
		return 5;
	else if (keycode == VK_INSERT)
		return 6;
	else if (keycode == VK_END)
		return 7;
	// keypad
	else if (keycode == VK_SUBTRACT)
		return 1;
	else if (keycode == VK_ADD)
		return 2;
	// no separate keycodes for keypad on MSWin
	/*
	else if (keycode == VK_KP_UP)
		return 3;
	else if (keycode == VK_KP_RIGHT)
		return 3;
	else if (keycode == VK_KP_DOWN)
		return 4;
	else if (keycode == VK_KP_LEFT)
		return 4;
	else if (keycode == VK_KP_HOME)
		return 5;
	else if (keycode == VK_KP_INSERT)
		return 6;
	else if (keycode == VK_KP_END)
		return 7;
	*/
	else return 0;
}

/*------------- the event loop ---------------*/

// This is the "idle" function called by the plugin host, where the X11 version
// polls the messageloop.
// The messageloop (for subwindows) is implemented as a callback to WndProc,
// so it cant be polled here.
// If it becomes necessary to do GUI stuff only from inside the "idle"
// calls, the Window-Messages might be buffered and processed later/here.
void event_handler(gx_ampegsvtUI *ui) {
}

LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
	static double start_value = 0.0;
	static bool blocked = false;
	POINT pt;

	// be aware: "ui" can be NULL during window creation (esp. if there is a debugger attached)
	gx_ampegsvtUI *ui = (gx_ampegsvtUI *)GetWindowLongPtr(hwnd, GWLP_USERDATA);

	switch (msg) {
		// MSWin only: React to close requests
		case WM_CLOSE:
			DestroyWindow(hwnd);
			return 0;
		case WM_DESTROY:
			PostQuitMessage(0);
			return 0;

		// X11:ConfigureNotify
		case WM_SIZE:
			if (!ui) return DefWindowProc(hwnd, msg, wParam, lParam);
			resize_event(ui); // configure event, we only check for resize events here
			return 0;
		// X11:Expose
		case WM_PAINT:
			if (!ui) return DefWindowProc(hwnd, msg, wParam, lParam);
			return onPaint(hwnd, wParam, lParam); // not possible on mswin: (only fetch the last expose event)

		// MSWin only: Allow keyboard input
		case WM_ACTIVATE:
			SetFocus(hwnd);
			return 0;
		case WM_MOUSEACTIVATE:
			SetFocus(hwnd);
			return MA_ACTIVATE;

		// X11:ButtonPress
		case WM_LBUTTONDOWN:
			if (!ui) return DefWindowProc(hwnd, msg, wParam, lParam);
			ui->pos_x = GET_X_LPARAM(lParam);
			ui->pos_y = GET_Y_LPARAM(lParam);
			blocked = true;
			button1_event(ui, &start_value); // left mouse button click
			return 0;
		case WM_MOUSEWHEEL:
			if (!ui) return DefWindowProc(hwnd, msg, wParam, lParam);
			// opposed to X11, WM_MOUSEWHEEL doesnt contain mouse coordinates
			if (GetCursorPos(&pt) && ScreenToClient(hwnd, &pt)) {
				ui->pos_x = pt.x;
				ui->pos_y = pt.y;
			}
			if (GET_WHEEL_DELTA_WPARAM(wParam) <= 0)
				scroll_event(ui, -1); // mouse wheel scroll down
			else
				scroll_event(ui, 1); // mouse wheel scroll up
			return 0;
		// X11:ButtonRelease
		case WM_LBUTTONUP:
			blocked = false;
			return 0;

		// X11:KeyPress
		case WM_KEYUP:
			if (!ui) return DefWindowProc(hwnd, msg, wParam, lParam);
			switch (key_mapping(wParam)) {
				case 1: set_previous_controller_active(ui); // "-"
				break;
				case 2: set_next_controller_active(ui); // "+"
				break;
				case 3: key_event(ui, 1); // UP/RIGHT
				break;
				case 4: key_event(ui, -1); // DOWN/LEFT
				break;
				case 5: set_key_value(ui, 1); // HOME
				break;
				case 6: set_key_value(ui, 2); // INSERT
				break;
				case 7: set_key_value(ui, 3); // END
				break;
				default:
				break;
			}
			return DefWindowProc(hwnd, msg, wParam, lParam);

		// X11:LeaveNotify (X11:EnterNotify: see WM_MOUSEMOVE)
		case WM_MOUSELEAVE:
			if (!ui) return DefWindowProc(hwnd, msg, wParam, lParam);
			ui->mouse_inside = false;
			if (!blocked) get_last_active_controller(ui, false);
			return 0;

		// X11:MotionNotify
		case WM_MOUSEMOVE:
			if (!ui) return DefWindowProc(hwnd, msg, wParam, lParam);
			if (!ui->mouse_inside) {
				// emulate X11:EnterNotify
				ui->mouse_inside = true;
				if (!blocked) get_last_active_controller(ui, true);
				SetMouseTracking(ui->win, true); // for receiving (next) WM_MOUSELEAVE
			}
			// mouse move while button1 is pressed
			if (wParam & MK_LBUTTON) {
				motion_event(ui, start_value, GET_Y_LPARAM(lParam));
			}
			return 0;

		// X11:ClientMessage: not implemented (could be done with WM_USER / RegisterWindowMessage())

		default:
			return DefWindowProc(hwnd, msg, wParam, lParam);
	}
}

LRESULT onPaint( HWND hwnd, WPARAM wParam, LPARAM lParam ) {
	PAINTSTRUCT ps ;
	gx_ampegsvtUI *ui = (gx_ampegsvtUI *)GetWindowLongPtr(hwnd, GWLP_USERDATA);

	// The cairo_win32_surface should only exist between BeginPaint()/EndPaint(),
	// otherwise it becomes unusable once the HDC of the owner window changes
	// (what can happen anytime, e.g. on resize).
	// Therefore, ui->surface is created as a simple cairo_image_surface,
	// that can exist throughout the plugins lifetime (exception: see resize_event())
	// and is copied to a win32_surface in the onPaint() event (see WM_PAINT).

	// draw onto the image surface first
	_expose(ui);

	// prepare to update window
	HDC hdc = BeginPaint(hwnd, &ps );

	// create the cairo surface and context
	cairo_surface_t *surface = cairo_win32_surface_create (hdc);
	cairo_t *cr = cairo_create (surface);
	// copy contents of the (permanent) image_surface to the win32_surface
	cairo_set_source_surface(cr, ui->surface, 0.0, 0.0);
	cairo_paint(cr);

	// cleanup
	cairo_destroy (cr);
	cairo_surface_destroy (surface);

	EndPaint( hwnd, &ps );
	return 0 ;
}

/*---------------------------------------------------------------------
---------------------------------------------------------------------*/	

void SetClientSize(HWND hwnd, int clientWidth, int clientHeight) {
	if (IsWindow(hwnd)) {
		DWORD dwStyle = GetWindowLongPtr(hwnd, GWL_STYLE) ;
		DWORD dwExStyle = GetWindowLongPtr(hwnd, GWL_EXSTYLE) ;
		HMENU menu = GetMenu(hwnd) ;
		RECT rc = {0, 0, clientWidth, clientHeight} ;
		AdjustWindowRectEx(&rc, dwStyle, menu ? TRUE : FALSE, dwExStyle);
		SetWindowPos(hwnd, NULL, 0, 0, rc.right - rc.left, rc.bottom - rc.top,
					 SWP_NOZORDER | SWP_NOMOVE) ;
	}
}

// WM_MOUSELEAVE is only reported ONCE after calling TrackMouseEvent(TME_LEAVE)
BOOL SetMouseTracking(HWND hwnd, BOOL enable) {
	TRACKMOUSEEVENT tme;

	tme.cbSize = sizeof(tme);
	tme.dwFlags = TME_LEAVE;
	if (!enable)
		tme.dwFlags |= TME_CANCEL;
	tme.hwndTrack = hwnd;
	tme.dwHoverTime = HOVER_DEFAULT;
	return TrackMouseEvent(&tme);
}

/*---------------------------------------------------------------------
---------------------------------------------------------------------*/	

#endif /* _WIN32 */
#endif /* __GX_PLATFORM_MSWIN_H__ */
