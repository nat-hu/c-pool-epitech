/*
** EPITECH PROJECT, 2024
** Unit Tests
** File description:
** my_strncpy
*/
#include <criterion/criterion.h>

char *my_strncpy(char *dest, char const *src, int n);
Test (my_strncpy , test_my_strncpy_with_dest_not_empty)
{
    char dest[] = "aaaaaaa";
    char source[] = "bbb";

    my_strncpy(dest, source, 3);
    cr_assert_str_eq(dest, "bbbaaaa");
}
