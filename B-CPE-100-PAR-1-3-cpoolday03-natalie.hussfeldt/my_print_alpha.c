/*
** EPITECH PROJECT, 2024
** my_print_alpha
** File description:
** displays the lowercase alphabet in ascending order
*/


void my_putchar(char c);
int my_print_alpha(void)
{
    char start = 'a';

    while (start <= 'z') {
        my_putchar(start);
        start++;
    }
    return (0);
}
