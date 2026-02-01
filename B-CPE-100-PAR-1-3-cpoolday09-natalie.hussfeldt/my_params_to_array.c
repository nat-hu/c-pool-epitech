/*
** EPITECH PROJECT, 2024
** my_params_to_array
** File description:
** stores the program’s parameters into an array
** of structures and returns the address of the arrays first cell
*/
#include "my.h"
#include <stdlib.h>

struct info_param *my_params_to_array(int ac, char **av)
{
    struct info_param *info;

    info = malloc((sizeof(struct info_param)) * (ac + 1));
    for (int i = 0; i < ac; i++) {
        info[i].length = my_strlen(av[i]);
        info[i].str = av[i];
        info[i].copy = my_strdup(av[i]);
        info[i].word_array = my_str_to_word_array(av[i]);
    }
    info[ac].length = 0;
    info[ac].str = 0;
    info[ac].copy = 0;
    info[ac].word_array = 0;
    return info;
}
