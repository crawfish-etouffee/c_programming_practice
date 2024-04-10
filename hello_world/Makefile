all: hello

hello: hello.o
	gcc -o hello_world hello_world.o

hello.o: hello_world.c
	gcc -c hello_world.c

clean:
	rm -f *.o hello_world
