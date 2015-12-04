SRC=$(wildcard *.c)
TARGETS=$(SRC:.c=)

% : %.c
	g++  -g -O0 -I/usr/include/libxml2 $< -o $@ -L/usr/lib/x86_64-linux-gnu  -lxml2

all : $(TARGETS)

clean:
	rm -rfv $(TARGETS)

.PHONY: all clean
