main: main.o vectors.o 
	g++ -o main main.o vectors.o

vectors.o: vectors.cpp vectors.h

tests: tests.o

tests.o:

clean:
	rm -f main main.o tests.o
