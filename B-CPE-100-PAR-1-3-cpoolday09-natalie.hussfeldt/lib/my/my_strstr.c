/*
** EPITECH PROJECT, 2024
** my_strstr
** File description:
** searches for a pattern
** inside a string
*/
#include "my.h"

static int compare_str(char *str, char const *to_find, int i, int len_find)
{
    for (int j = 0; j < len_find; j++){
        if (to_find[j] != str[j + i]){
            return 0;
        }
    }
    return 1;
}

char *my_strstr(char *str, char const *to_find)
{
    int len_find = my_strlen(to_find);
    int len_str = my_strlen(str);

    if (len_find == 0 || len_str == 0 || len_find > len_str) {
        return 0;
    }
    for (int i = 0; i <= len_str - len_find; i++) {
        if (compare_str(str, to_find, i, len_find)) {
            return &str[i];
        }
    }
    return 0;
}
