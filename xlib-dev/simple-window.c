#include <X11/X.h>
#include <X11/Xlib.h>
#include <stdio.h>
#include <err.h>

#define POSX 500
#define POSY 500
#define WIDTH 500
#define HEIGHT 500
#define BORDER 10

static Display* display;
static int screen;
static Window root;

int main() {
  display = XOpenDisplay(NULL);
  Window window;
  XEvent ev;

  if (display == NULL) {
    errx(1, "Can't opent display");
  }

  screen = DefaultScreen(display);
  root = RootWindow(display, screen);

  window = XCreateSimpleWindow(display, root, POSX, POSY, WIDTH, HEIGHT, BORDER, BlackPixel(display, screen), WhitePixel(display, screen));
  XMapWindow(display, window);

  while (XNextEvent(display, &ev) == 0) {
     
  }

  XUnmapWindow(display, window);
  XDestroyWindow(display, window);
  XCloseDisplay(display);

  return 0;
}
