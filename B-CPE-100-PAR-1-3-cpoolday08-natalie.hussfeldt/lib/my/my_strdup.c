/*
** EPITECH PROJECT, 2024
** my_strdup
** File description:
** allocates memory and copies the string
** given as argument in it
*/
#include <stdlib.h>

int my_strlen(char const *str);
char *my_strdup(char const *src)
{
    int size_of_char = 1;
    int src_len = my_strlen(src);
    char *str = malloc(size_of_char * src_len + 1);

    for (int i = 0; i < src_len; i++) {
        str[i] = src[i];
    }
    str[src_len] = '\0';
    return str;
}
