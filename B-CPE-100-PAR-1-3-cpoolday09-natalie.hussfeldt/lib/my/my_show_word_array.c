/*
** EPITECH PROJECT, 2024
** my_show_word_array
** File description:
** displays the content of an array of words
*/
#include <stdlib.h>

int my_show_word_array(char *const *tab)
{
    int i = 0;

    if (tab == NULL) {
        return 0;
    }
    while (tab[i]) {
        my_putstr(tab[i]);
        my_putchar('\n');
        i++;
    }
    return 0;
}
