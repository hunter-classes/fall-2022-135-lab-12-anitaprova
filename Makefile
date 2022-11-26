main: main.o vectors.o 
	g++ -o main main.o vectors.o

vectors.o: vectors.cpp vectors.h

tests: tests.o vectors.o
	g++ -o tests tests.o vectors.o 

tests.o: doctest.h vectors.h

clean:
	rm -f main tests main.o tests.o
