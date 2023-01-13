// vim:ts=4:sw=4:noet:
#ifndef __GX_PLATFORM_LINUX_H__
#define __GX_PLATFORM_LINUX_H__ 1
#ifdef __linux__

#include "lv2/lv2plug.in/ns/lv2core/lv2.h"
#include "lv2/lv2plug.in/ns/extensions/ui/ui.h"

#include <X11/Xutil.h>
#include <X11/keysym.h>
#include <X11/Xatom.h>
#include <cairo-xlib.h>

#include <gui/gx_gui.h>

/*---------------------------------------------------------------------
-----------------------------------------------------------------------	
			common functions (required)
-----------------------------------------------------------------------
----------------------------------------------------------------------*/

bool gx_gui_open_display(gx_ampegsvtUI *ui) {
	ui->dpy = XOpenDisplay(0);
	return (ui->dpy != NULL);
}

void gx_gui_create_window_and_surface(gx_ampegsvtUI *ui) {
	ui->win = XCreateWindow(ui->dpy, (Window)ui->parentWindow, 0, 0,
								ui->width, ui->height, 0,
								CopyFromParent, InputOutput,
								CopyFromParent, CopyFromParent, 0);

	ui->event_mask = StructureNotifyMask|ExposureMask|KeyPressMask 
					|EnterWindowMask|LeaveWindowMask|ButtonReleaseMask
					|ButtonPressMask|Button1MotionMask;

	XSelectInput(ui->dpy, ui->win, ui->event_mask);
	XMapWindow(ui->dpy, ui->win);
	XClearWindow(ui->dpy, ui->win);

	ui->visual = DefaultVisual(ui->dpy, DefaultScreen (ui->dpy));
	ui->surface = cairo_xlib_surface_create (ui->dpy, ui->win, ui->visual,
										ui->width, ui->height);
}

void gx_gui_register_controller_message(gx_ampegsvtUI *ui) {
	ui->DrawController = XInternAtom(ui->dpy, "ControllerMessage", False);
}

void gx_gui_destroy_main_window(gx_ampegsvtUI *ui) {
	XDestroyWindow(ui->dpy, ui->win);
	XCloseDisplay(ui->dpy);
}

void gx_gui_resize_surface(gx_ampegsvtUI *ui) {
	XWindowAttributes attrs;
	XGetWindowAttributes(ui->dpy, (Window)ui->parentWindow, &attrs);
	ui->width = attrs.width;
	ui->height = attrs.height;
	XResizeWindow (ui->dpy,ui->win ,ui->width, ui->height);
	cairo_xlib_surface_set_size( ui->surface, ui->width, ui->height);
}

void gx_gui_send_controller_event(gx_ampegsvtUI *ui, int controller) {
	XClientMessageEvent xevent;
	xevent.type = ClientMessage;
	xevent.message_type = ui->DrawController;
	xevent.display = ui->dpy;
	xevent.window = ui->win;
	xevent.format = 16;
	xevent.data.l[0] = controller;
	XSendEvent(ui->dpy, ui->win, 0, 0, (XEvent *)&xevent);
}

/*---------------------------------------------------------------------
-----------------------------------------------------------------------	
			private functions
-----------------------------------------------------------------------
----------------------------------------------------------------------*/

// map supported key's to integers or return zerro
static int key_mapping(Display *dpy, XKeyEvent *xkey) {
	if (xkey->keycode == XKeysymToKeycode(dpy,XK_Tab))
		return (xkey->state == ShiftMask) ? 1 : 2;
	else if (xkey->keycode == XKeysymToKeycode(dpy,XK_Up))
		return 3;
	else if (xkey->keycode == XKeysymToKeycode(dpy,XK_Right))
		return 3;
	else if (xkey->keycode == XKeysymToKeycode(dpy,XK_Down))
		return 4;
	else if (xkey->keycode == XKeysymToKeycode(dpy,XK_Left))
		return 4;
	else if (xkey->keycode == XKeysymToKeycode(dpy,XK_Home))
		return 5;
	else if (xkey->keycode == XKeysymToKeycode(dpy,XK_Insert))
		return 6;
	else if (xkey->keycode == XKeysymToKeycode(dpy,XK_End))
		return 7;
	// keypad
	else if (xkey->keycode == XKeysymToKeycode(dpy,XK_KP_Subtract))
		return 1;
	else if (xkey->keycode == XKeysymToKeycode(dpy,XK_KP_Add))
		return 2;
	else if (xkey->keycode == XKeysymToKeycode(dpy,XK_KP_Up))
		return 3;
	else if (xkey->keycode == XKeysymToKeycode(dpy,XK_KP_Right))
		return 3;
	else if (xkey->keycode == XKeysymToKeycode(dpy,XK_KP_Down))
		return 4;
	else if (xkey->keycode == XKeysymToKeycode(dpy,XK_KP_Left))
		return 4;
	else if (xkey->keycode == XKeysymToKeycode(dpy,XK_KP_Home))
		return 5;
	else if (xkey->keycode == XKeysymToKeycode(dpy,XK_KP_Insert))
		return 6;
	else if (xkey->keycode == XKeysymToKeycode(dpy,XK_KP_End))
		return 7;
	else return 0;
}

/*------------- the event loop ---------------*/

// general xevent handler
void event_handler(gx_ampegsvtUI *ui) {
	XEvent xev;
	static double start_value = 0.0;
	static bool blocked = false;

	while (XPending(ui->dpy) > 0) {
		XNextEvent(ui->dpy, &xev);

		switch(xev.type) {
			case ConfigureNotify:
				// configure event, we only check for resize events here
				resize_event(ui);
			break;
			case Expose:
				// only fetch the last expose event
				if (xev.xexpose.count == 0) 
					_expose(ui);
			break;

			case ButtonPress:
				ui->pos_x = xev.xbutton.x;
				ui->pos_y = xev.xbutton.y;

				switch(xev.xbutton.button) {
					case Button1:
						if (xev.xbutton.type == ButtonPress) {
							blocked = true;
						}
						// left mouse button click
						button1_event(ui, &start_value);
					break;
					case Button2:
						// click on the mouse wheel
						//fprintf(stderr,"Button2 \n");
					break;
					case Button3:
						// right mouse button click
						//fprintf(stderr,"Button3 \n");
					break;
					case  Button4:
						// mouse wheel scroll up
						scroll_event(ui, 1);
					break;
					case Button5:
						// mouse wheel scroll down
						scroll_event(ui, -1);
					break;
					default:
					break;
				}
			break;
			case ButtonRelease:
				if (xev.xbutton.type == ButtonRelease) {
					blocked = false;
				}
			break;

			case KeyPress:
				switch (key_mapping(ui->dpy, &xev.xkey)) {
					case 1: set_previous_controller_active(ui);
					break;
					case 2: set_next_controller_active(ui);
					break;
					case 3: key_event(ui, 1);
					break;
					case 4: key_event(ui, -1);
					break;
					case 5: set_key_value(ui, 1);
					break;
					case 6: set_key_value(ui, 2);
					break;
					case 7: set_key_value(ui, 3);
					break;
					default:
					break;
				}
			break;

			case EnterNotify:
				if (!blocked) get_last_active_controller(ui, true);
			break;
			case LeaveNotify:
				if (!blocked) get_last_active_controller(ui, false);
			break;
			case MotionNotify:
				// mouse move while button1 is pressed
				if(xev.xmotion.state & Button1Mask) {
					motion_event(ui, start_value, xev.xmotion.y);
				}
			break;
			case ClientMessage:
				if (xev.xclient.message_type == ui->DrawController) {
					int i = (int)xev.xclient.data.l[0];
					controller_expose(ui, &ui->controls[i]);
				}
			break;

			default:
			break;
		}
	}
}

#endif /* __linux__ */
#endif /* __GX_PLATFORM_LINUX_H__ */
