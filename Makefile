CC=g++

LDFLAGS=-pthread

all: program1

program1: main.cpp
	$(CC) $(CFLAGS) main.cpp -o main

clean:
	rm -f *.o program1
