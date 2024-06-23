PROG = xwindow
SRC = $(PROG).c
OBJ = $(SRC:.c=.o)

GCC = gcc
INCS = -l/usr/include/X11/
LIBS = -lX11

LDFLAGS = ${LIBS}
CFLAGS = -Wall -Wextra -O0 -${INCS}

all: ${PROG}

${PROG}: ${OBJ}
	${GCC} -o $@ ${LDFLAGS}

%.o: %.c
	${GCC} -c $< ${CFLAGS}

clean:
	rm -rf ${OBJ} ${PROG}

.PHONY: all clean
