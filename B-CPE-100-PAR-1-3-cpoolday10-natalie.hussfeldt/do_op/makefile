##
## EPITECH PROJECT, 2024
## Makefile
## File description:
## contains rules for all, clean, fclean, re
##

CC = gcc
CFLAGS = -I../include
LDFLAGS = -L ../lib/my -lmy
SRC = do_op.c
OBJ = $(SRC:.c=.o)
NAME = do-op

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(LDFLAGS) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
