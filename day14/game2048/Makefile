CC=gcc
BIN=all
OBJ=direction.o main.o game2048.o tools.o
FLAG=-Wall -Werror
FLAGD=-Wall -Werror -DDEBUG
STD=-std=gnu99
LINK=-lm

all:$(OBJ)
	$(CC) -o $(BIN) $(OBJ)

main.o:main.c game2048.h
	$(CC) $(STD) $(FLAG) -c main.c

direction.o:direction.c direction.h game2048.h tools.h
	$(CC) $(STD) $(FLAG) -c direction.c

game2048.o:game2048.c game2048.h tools.h direction.h
	$(CC) $(STD) $(FLAG) -c game2048.c
	
tools.o:tools.c tools.h game2048.h
	$(CC) $(STD) $(FLAG) -c tools.c
		
clean:
	rm $(BIN) $(OBJ)
