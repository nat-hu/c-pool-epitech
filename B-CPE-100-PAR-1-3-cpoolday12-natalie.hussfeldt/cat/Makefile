##
## EPITECH PROJECT, 2024
## Makefile
## File description:
## makefile
##

CC = gcc
CFLAGS = -W -Wall -Wextra -I ./include

SRC = $(shell find . -name "*.c")
OBJ = $(SRC:.c=.o)

LIB = libmy.a
BIN = cat

RM = rm -f

all: $(BIN)

$(LIB): $(OBJ)
	ar rc $(LIB) $(OBJ)
	ranlib $(LIB)

$(BIN): $(LIB) $(OBJ)
	$(CC) -o $(BIN) $(OBJ) $(LIB) $(CFLAGS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(LIB) $(BIN) *.gcno *.gcda

re: fclean all

tests_run: $(LIB)
	$(CC) -o tests_run ./tests/my_test_cat.c $(LIB) --coverage -lcriterion -I ./include
	./tests_run

.PHONY: all clean fclean re tests_run
