/*
** EPITECH PROJECT, 2024
** my sort word array
** File description:
** sorting by ascii
*/
#include "my.h"
#include <stdlib.h>

static int get_len_of_array(char **tab)
{
    int n = 0;

    while (tab[n] != NULL) {
        n++;
    }
    return n;
}

static int swap_and_compare(char **tab, int i)
{
    char *temp;

    if (my_strcmp(tab[i], tab[i + 1]) > 0) {
        temp = tab[i];
        tab[i] = tab[i + 1];
        tab[i + 1] = temp;
        return 1;
    }
    return 0;
}

int my_sort_word_array(char **tab)
{
    int n = get_len_of_array(tab);
    int pass;
    int swapped;

    if (tab == NULL) {
        return 0;
    }
    for (pass = 0; pass < n - 1; pass++) {
        swapped = 0;
        for (int i = 0; i < n - pass - 1; i++) {
            swapped |= swap_and_compare(tab, i);
        }
        if (!swapped) {
            break;
        }
    }
    return 0;
}
