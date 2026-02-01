/*
** EPITECH PROJECT, 2024
** Unit Test
** File description:
** test my_strdup.c
*/
#include <criterion/criterion.h>

char *my_strdup(char const *src);
Test (my_strdup , test_my_strdup_with_test_string)
{
    char test[] = "aaaa";

    cr_assert_str_eq(my_strdup(test), "aaaa");
}

