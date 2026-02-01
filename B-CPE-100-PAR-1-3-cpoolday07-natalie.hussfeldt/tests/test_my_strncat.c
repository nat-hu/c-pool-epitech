/*
** EPITECH PROJECT, 2024
** Unit Test
** File description:
** test my_strncat
*/
#include <criterion/criterion.h>

char *my_strncat(char *dest, char const *src, int nb);
Test (my_strncat , simple_test)
{
    char dest[] = "Test";
    char source[] = "2test";

    cr_assert_str_eq(my_strncat(dest, source, 1), "Test2");
}
