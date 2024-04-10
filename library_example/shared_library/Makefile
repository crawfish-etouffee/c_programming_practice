CC=clang
CFLAGS=-Wall -g
BINS=libplus1.dylib libplus2.dylib test.elf

all: $(BINS)

%.dylib: %.c
	$(CC) $(CFLAGS) -fPIC -shared -o $@ $<

%.elf: %.c
	$(CC) $(CFLAGS) -o $@ $^

clean:
	$(RM) $(BINS)
	$(RM) -r *.dSYM
