main: main.o vectors.o optimism.o 
	g++ -o main main.o vectors.o optimism.o

vectors.o: vectors.cpp vectors.h

optimism.o: optimism.cpp optimism.h

tests: tests.o vectors.o optimism.o
	g++ -o tests tests.o vectors.o optimism.o 

tests.o: doctest.h vectors.h optimism.h

clean:
	rm -f main tests main.o tests.o vectors.o optimism.o
