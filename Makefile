all: system.c 
	gcc -o system system.c
	gcc -c functions.c
Run:
	./system
clean:
	rm -f *.o
