main: main.c point.c point.h point3d.c point3d.h
	gcc -Wall -o main `pkg-config --libs --cflags gobject-2.0` main.c point.c point3d.c

clean:
	rm -f main
