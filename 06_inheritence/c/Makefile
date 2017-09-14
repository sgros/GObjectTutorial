main: main.c point.c point.h point3d.c point3d.h
	gcc -Wall -o main main.c point.c point3d.c `pkg-config --libs --cflags gobject-2.0`

clean:
	rm -f main
