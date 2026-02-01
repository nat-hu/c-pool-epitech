/*
** EPITECH PROJECT, 2024
** Unit Test
** File description:
** test my_concat_params
*/
#include <criterion/criterion.h>

char *concat_params(int argc, char **argv);
Test (my_concat_params, simple_test)
{
    int argc = 3;
    char *argv[] = {"./concat_params", "toto", "titi", NULL};

    cr_assert_str_eq(concat_params(argc, argv), "./concat_params\ntoto\ntiti\n\0");
}
