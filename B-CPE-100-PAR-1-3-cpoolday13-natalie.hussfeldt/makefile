##
## EPITECH PROJECT, 2024
## Makefile
## File description:
## makefile
##

CC = gcc
CFLAGS = -I../include
LDFLAGS = -L ../lib/my -lbtree
SRC = cat.c
OBJ = $(SRC:.c=.o)
NAME = cat
TEST_NAME = tests_run

all: libbtree $(NAME)

libmy:
	make -C ../lib/my

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(LDFLAGS) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(NAME)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re libmy
