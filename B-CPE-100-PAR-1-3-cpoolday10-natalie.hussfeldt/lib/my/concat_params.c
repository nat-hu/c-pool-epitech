/*
** EPITECH PROJECT, 2024
** concat_params.c
** File description:
** turns the command-line given arguments
** into a single string
*/
#include <stdlib.h>
#include "my.h"

char *concat_params(int argc, char **argv)
{
    int size_of_char = 1;
    int len_total = 0;
    char *str;
    int count = 0;

    for (int x = 0; x < argc; x++) {
        len_total += my_strlen(argv[x]);
    }
    len_total += argc;
    str = malloc(size_of_char * len_total + 1);
    for (int i = 0; i < argc; i++) {
        for (int j = 0; j < my_strlen(argv[i]); j++) {
            str[count] = argv[i][j];
            count++;
        }
        str[count] = '\n';
        count++;
    }
    str[len_total] = '\0';
    return str;
}
