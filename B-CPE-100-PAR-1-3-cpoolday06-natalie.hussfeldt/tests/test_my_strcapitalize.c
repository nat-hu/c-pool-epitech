/*
** EPITECH PROJECT, 2024
** Unit Test
** File description:
** test my_strcapitalize.c
*/
#include <criterion/criterion.h>

char *my_strcapitalize(char *str);
Test (my_strcapitalize, test_string_transformation)
{
    char test[] = "the sentence, hey, how are you? 42WORds forty-two";

    cr_assert_str_eq(my_strcapitalize(test), "The Sentence, Hey, How Are You? 42words Forty-Two");
}
