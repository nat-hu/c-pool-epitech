/*
** EPITECH PROJECT, 2024
** Unit Test
** File description:
** test my strcat
*/
#include <criterion/criterion.h>

char *my_strcat(char *dest, char const *src);
Test (my_strcat , simple_test)
{
    char dest[] = "Test";
    char source[] = "2test";
    
    cr_assert_str_eq(my_strcat(dest, source), "Test2test");
}
