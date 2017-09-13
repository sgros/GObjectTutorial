main: main.c point.c point.h
	gcc -Wall -o main main.c point.c `pkg-config --libs --cflags gobject-2.0`

clean:
	rm -f main
