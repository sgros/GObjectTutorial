all: main-final main-derivable

main-final: main-final.c point-final.c point-final.h
	gcc -Wall -o main-final main-final.c point-final.c `pkg-config --libs --cflags gobject-2.0`

main-derivable: main-derivable.c point-derivable.c point-derivable.h
	gcc -Wall -o main-derivable main-derivable.c point-derivable.c `pkg-config --libs --cflags gobject-2.0`

clean:
	rm -f main-final main-derivable
