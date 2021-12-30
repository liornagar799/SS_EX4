.PHONY:clean all
	
all: graph

graph: algo.o algo.a
	gcc -Wall -g -o graph algo.o algo.a 

algo.o: algo.c algo.h
	gcc -Wall -g -c algo.c

algo.a: algo.o 
	ar -rcs algo.a algo.o

clean:
	rm -f *.o *.a graph

