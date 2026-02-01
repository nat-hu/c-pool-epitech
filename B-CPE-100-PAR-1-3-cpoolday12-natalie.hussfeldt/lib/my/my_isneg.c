/*
** EPITECH PROJECT, 2024
** my_isneg
** File description:
** displays either N if the integer passed as parameter is negative
** P otherwise
*/
#include "my.h"

int my_isneg(int n)
{
    int i = n;

    if (i < 0) {
        my_putchar('N');
    } else {
        my_putchar('P');
    }
    return (0);
}
