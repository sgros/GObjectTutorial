all: main-final main-derivable

main-final: main-final.c point-final.c point-final.h
	gcc -Wall -o main-final `pkg-config --libs --cflags gobject-2.0` main-final.c point-final.c

main-derivable: main-derivable.c point-derivable.c point-derivable.h
	gcc -Wall -o main-derivable `pkg-config --libs --cflags gobject-2.0` main-derivable.c point-derivable.c

clean:
	rm -f main-final main-derivable
