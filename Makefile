all: system.c
	gcc -o system system.c
Run:
	./system
clean:
	rm -f *.o
