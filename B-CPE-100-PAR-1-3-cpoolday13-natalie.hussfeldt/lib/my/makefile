##
## EPITECH PROJECT, 2024
## MAKEFILE
## File description:
## creates libmy.a
##

CC = gcc

CFLAGS = -I ../../include

LDFLAGS = -L./lib/my -lbtree

SRC = $(shell find . -type f -name '*.c')

OBJ = $(SRC:.c=.o)

NAME_LIB = libbtree.a

NAME_HEADER = btree.h

all: $(NAME_LIB)

$(NAME_LIB): $(OBJ)
	ar rc $(NAME_LIB) $(OBJ)
	cp $(NAME_LIB) ../$(NAME_LIB)
	cp $(NAME_HEADER) ../../include/$(NAME_HEADER)
	make clean

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean : $(shell rm -f $(OBJ))~

.PHONY: all clean
