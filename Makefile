CC = g++

all: main.bin

game.o: game.hpp game.cpp
	$(CC) -c -g -o game.o game.cpp

main.bin: game.o main.cpp
	$(CC) -g -o main.bin game.o main.cpp

clean:
	rm -rf *.o *.bin
