# -*- MakeFile -*-
all: geom tip

geom: geom.o gd.o
	gcc $^ -o $@

geom.o: geom.c gd.h
	gcc -c geom.c

gd.o: gd.c
	gcc -c gd.c

tip: tip.o
	gcc tip.o gd.o -o $@

tip.o: tip.c gd.h
	gcc -c tip.c

clean:
	$(RM) *.o geom tip
