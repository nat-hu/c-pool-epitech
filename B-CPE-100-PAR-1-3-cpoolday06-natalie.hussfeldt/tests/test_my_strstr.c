/*
** EPITECH PROJECT, 2024
** Unit Test
** File description:
** test my_strstr
*/

#include <criterion/criterion.h>

char *my_strstr(char *str, char const *to_find);
Test (my_strstr, test_no_matching_pattern)
{
    char src[] = "aaaaaaa";
    char find[] = "bbb";

    cr_assert_eq(my_strstr(src, find), NULL);
}

Test (my_strstr, test_matching_pattern)
{
    char src[] = "aabbbaaaaa";
    char find[] = "bbb";

    cr_assert_eq(my_strstr(src, find), &src[2]);
}
