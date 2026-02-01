/*
** EPITECH PROJECT, 2024
** Unit Test
** File description:
** test my_strncmp.c
*/
#include <criterion/criterion.h>

int my_strncmp(char const *s1, char const *s2, int n);
Test(my_strncmp, test_no_matching_pattern_a_smaller)
{
    char src[] = "aaaaaaa";
    char find[] = "bbb";

    cr_assert_eq(my_strncmp(src, find, 2), -1);
}

Test(my_strncmp, test_no_matching_pattern_a_bigger)
{
    char src[] = "bbbbbbbbb";
    char find[] = "aaaa";

    cr_assert_eq(my_strncmp(src, find, 2), 1);
}

Test(my_strncmp, test_no_matching_pattern)
{
    char src[] = "bba";
    char find[] = "bbb";

    cr_assert_eq(my_strncmp(src, find, 2), 0);
}
