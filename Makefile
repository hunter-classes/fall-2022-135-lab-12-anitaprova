main: main.o 
	g++ -o main main.o

tests: tests.o

tests.o:

clean:
	rm -f main main.o tests.o
