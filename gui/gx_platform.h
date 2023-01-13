// vim:ts=4:sw=4:noet:
#ifndef __GX_PLATFORM_H__
#define __GX_PLATFORM_H__ 1

#ifdef __linux__
#include <X11/Xutil.h>
#include <X11/keysym.h>
#include <X11/Xatom.h>
#endif /* __linux__ */
#ifdef _WIN32
#include <windows.h>
#endif /* _WIN32 */
#ifdef __APPLE__
#endif /*__APPLE__ */

/*---------------------------------------------------------------------
-----------------------------------------------------------------------	
				additional members of struct gx_ampegsvtUI
-----------------------------------------------------------------------
----------------------------------------------------------------------*/

#ifdef __linux__
#define platform_ui_members \
	Display *dpy; \
	Window win; \
	void *parentWindow; \
	Visual *visual; \
	long event_mask; \
	Atom DrawController;
#endif /* __linux__ */

#ifdef _WIN32
#define platform_ui_members \
	HWND win; \
	HWND parentWindow; \
	BOOL mouse_inside;
#endif /* _WIN32 */

#ifdef __APPLE__
#define platform_ui_members
#endif /*__APPLE__ */

/*---------------------------------------------------------------------
-----------------------------------------------------------------------
		define some MACROS to read png data from binary stream
		png's been converted to object files with
		ld -r -b binary name.png -o name.o
-----------------------------------------------------------------------
----------------------------------------------------------------------*/

// in former(?) mingw versions, this was spelled "binary_" (without leading underscore)
#if defined(__linux__) || defined(_WIN32)
#define EXTLD(NAME) \
  extern const unsigned char _binary_ ## NAME ## _start[]; \
  extern const unsigned char _binary_ ## NAME ## _end[];
#define LDVAR(NAME) \
  _binary_ ## NAME ## _start
#define LDLEN(NAME) \
  ((_binary_ ## NAME ## _end) - (_binary_ ## NAME ## _start))
#endif /* defined(__linux__) || defined(_WIN32) */

#ifdef __APPLE__
#include <mach-o/getsect.h>
#define EXTLD(NAME) \
  extern const unsigned char _section$__DATA__ ## NAME [];
#define LDVAR(NAME) _section$__DATA__ ## NAME
#define LDLEN(NAME) (getsectbyname("__DATA", "__" #NAME)->size)
#endif /*__APPLE__ */

#endif /* __GX_PLATFORM_H__ */
