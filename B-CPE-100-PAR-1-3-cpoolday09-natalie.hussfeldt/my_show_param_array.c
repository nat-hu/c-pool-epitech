/*
** EPITECH PROJECT, 2024
** displays the content of an array of structures
** File description:
** my_show_param_array
*/
#include "include/my.h"
//#include "my_struct.h"

int view_struct(struct info_param *info)
{
    my_putstr(info.str);
    my_putchar('\n');
    my_put_nbr(info.length);
    my_putchar('\n');
    my_show_word_array(info.word_array);
    return 0;
}

int my_show_param_array(struct info_param const *par)
{
    int i = 0;

    while (par[i].str != 0) {
        view_struct(par[i]);
        i++;
    }
    return 0;
}
