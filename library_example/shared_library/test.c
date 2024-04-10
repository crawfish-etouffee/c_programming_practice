#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>

int main(int argc, char **argv) {
    
    if (argc < 3) {
        printf("usage: %s <library> <number>\n", argv[0]);
        exit(1);
    }

    char *librarypath = argv[1];
    int thenumber = atoi(argv[2]);

    void *libhandle = dlopen(librarypath, RTLD_LAZY);

    if (libhandle == NULL) {
        perror("dlopen");
    }

    int (*opfunc) (int);
    opfunc = dlsym(libhandle, "do_operation");

    char* (*libnamefunc) ();
    libnamefunc = dlsym(libhandle, "get_library_name");

    if (opfunc == NULL || libnamefunc == NULL) {
        printf("ERROR: could not read functions from library.");
        exit(1);
    }

    printf("Library name: %s\n", libnamefunc());
    printf("%d --> %d\n", thenumber, opfunc(thenumber));

    dlclose(libhandle);
}
