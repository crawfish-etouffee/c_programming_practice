# -*- MakeFile -*-

CC=clang
CFLAGS=-g -Wall
OBJS=allocator.o memtest.o
BIN = main

all: $(BIN)

main: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o main

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean: 
	$(RM) -r main *.o *.dSYM
