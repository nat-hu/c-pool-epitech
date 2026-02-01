/*
** EPITECH PROJECT, 2024
** my_strcmp
** File description:
** compares two strings by character
** returns 0 if the strings are equal
** returns >0 f the first non-matching character in
** str1 is greater (in ASCII) than that of str2
** returns <0 if its lower
*/
#include "my.h"

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;

    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i]) {
        return (s1[i] > s2[i]) ? 1 : -1;
        }
        i++;
    }
    if (s1[i] == '\0' && s2[i] == '\0') {
        return 0;
    }
    return (s1[i] == '\0') ? -1 : 1;
}
