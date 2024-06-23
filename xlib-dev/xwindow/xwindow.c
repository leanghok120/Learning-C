#include <X11/X.h>
#include <X11/Xlib.h>
#include <err.h>

#define POSX 500
#define POSY 500
#define WIDTH 750
#define HEIGHT 750
#define BORDER 25

static Display * dpy;
static int scr;
static Window root;

static Window create_win(int x, int y, int w, int h, int b) {
  Window win;
  XSetWindowAttributes xwa;

  xwa.background_pixel = WhitePixel(dpy, scr);
  xwa.border_pixel = BlackPixel(dpy, scr);
  xwa.event_mask = ButtonPress;

  win = XCreateWindow(dpy, root, x, y, w, h, b, DefaultDepth(dpy, scr), InputOutput, DefaultVisual(dpy, scr), CWBorderPixel | CWEventMask | CWBackPixel, &xwa);

  return win;
}

static void run() {
  XEvent ev;

  while (XNextEvent(dpy, &ev) == 0) {
    switch (ev.type) {
      case ButtonPress:
        return;
    }
  }
}

int main() {
  dpy = XOpenDisplay(NULL);
  if (dpy == NULL) {
    errx(1, "Couldn't connect with X Server");
  }

  scr = DefaultScreen(dpy);
  root = RootWindow(dpy, scr);

  Window win = create_win(POSX, POSY, WIDTH, HEIGHT, BORDER);
  XMapWindow(dpy, win);

  run();

  XUnmapWindow(dpy, win);
  XDestroyWindow(dpy, win);

  XCloseDisplay(dpy);

  return 0;
}
