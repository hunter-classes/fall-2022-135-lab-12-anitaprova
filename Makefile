main: main.o vectors.o optimism.o fusion.o
	g++ -o main main.o vectors.o optimism.o fusion.o

vectors.o: vectors.cpp vectors.h

optimism.o: optimism.cpp optimism.h

fusion.o: fusion.cpp fusion.h

tests: tests.o vectors.o optimism.o fusion.o
	g++ -o tests tests.o vectors.o optimism.o fusion.o 

tests.o: doctest.h vectors.h optimism.h fusion.h

clean:
	rm -f main tests main.o tests.o vectors.o optimism.o fusion.o
