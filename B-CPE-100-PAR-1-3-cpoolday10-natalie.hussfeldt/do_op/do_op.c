/*
** EPITECH PROJECT, 2024
** do-op program
** File description:
** calculates
*/
#include "my.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void my_putstr_stderr(char *str)
{
    while (*str) {
        write(2, str, 1);
        str++;
    }
}

char my_getoperator(char const *str)
{
    if (str[0] == '+')
        return '+';
    if (str[0] == '-')
        return '-';
    if (str[0] == '*')
        return '*';
    if (str[0] == '/')
        return '/';
    if (str[0] == '%')
        return '%';
    return -1;
}

int print_calcul(function all_ops[], char operator, int a, int b)
{
    int result = 0;

    switch (operator) {
    case '+':
        result = all_ops[0](a, b);
        break;
    case '-':
        result = all_ops[1](a, b);
        break;
    case '*':
        result = all_ops[2](a, b);
        break;
    case '/':
        result = all_ops[3](a, b);
        break;
    case '%':
        result = all_ops[4](a, b);
        break;
    }
    return result;
}

int do_op(char **argv)
{
    function all_ops[5] = {&get_sum, &get_dif, &get_mul,
    &get_div, &get_modulo};
    int a = my_getnbr(argv[1]);
    char op = my_getoperator(argv[2]);
    int b = my_getnbr(argv[3]);
    int result = 0;

    if (argv[2][0] == '/' && b == 0) {
        my_putstr_stderr("Stop: division by zero\n");
        return 84;
    }
    if (argv[2][0] == '%' && b == 0) {
        my_putstr_stderr("Stop: modulo by zero\n");
        return 84;
    }
    result = print_calcul(all_ops, op, a, b);
    my_put_nbr(result);
    return 0;
}

int main(int argc, char **argv)
{
    int result = 0;

    if (argc >= 4) {
        result = do_op(argv);
        return result;
    }
    return 84;
}
