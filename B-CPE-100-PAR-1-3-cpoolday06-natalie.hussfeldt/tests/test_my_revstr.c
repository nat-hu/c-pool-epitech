/*
** EPITECH PROJECT, 2024
** Unit Test
** File description:
** tests my_revstr.c
*/
#include <criterion/criterion.h>

char *my_revstr(char const *src);
Test (my_revstr, reverse_hello)
{
    char test[] = "hello";

    my_revstr(test);
    cr_assert_str_eq(test, "olleh");
}
