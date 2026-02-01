/*
** EPITECH PROJECT, 2024
** my_swap
** File description:
** swaps the content of two integers
** whose addresses are given as a parameter
*/

void my_swap(int *a, int *b)
{
    int b_temp = *b;

    *b = *a;
    *a = b_temp;
}
