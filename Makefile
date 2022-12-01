main: main.o vectors.o optimism.o fusion.o pairwise.o
	g++ -o main main.o vectors.o optimism.o fusion.o pairwise.o

main.o: main.cpp vectors.h optimism.h fusion.h pairwise.h

vectors.o: vectors.cpp vectors.h

optimism.o: optimism.cpp optimism.h

fusion.o: fusion.cpp fusion.h

pairwise.o: pairwise.cpp pairwise.h

tests: tests.o vectors.o optimism.o fusion.o pairwise.o
	g++ -o tests tests.o vectors.o optimism.o fusion.o pairwise.o 

tests.o: doctest.h vectors.h optimism.h fusion.h pairwise.h

clean:
	rm -f main tests main.o tests.o vectors.o optimism.o fusion.o pairwise.o
