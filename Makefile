all: system.c 
	gcc -o system system.c
	gcc -c functions.c
run:
	./system
clean:
	rm -f *.o
