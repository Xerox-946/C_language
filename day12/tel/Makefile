CC=gcc
BIN=all
OBJ=main.o mail.o tools.o
FLAG=-Wall -Werror
STD=-std=gnu99
LINK=-lm

all:$(OBJ)
	$(CC) -o $(BIN) $(OBJ)

%.o:%.c
	$(CC) $(STD) $(FLAG) -c $< -o $@
clean:
	rm $(BIN) $(OBJ)
