/*
** EPITECH PROJECT, 2024
** operator functions
** File description:
** compute math
*/

int get_sum(int a, int b)
{
    return a + b;
}

int get_dif(int a, int b)
{
    return a - b;
}

int get_mul(int a, int b)
{
    return a * b;
}

int get_div(int a, int b)
{
    return (b != 0) ? a / b : 0;
}

int get_modulo(int a, int b)
{
    return b != 0 ? a % b : 0;
}
