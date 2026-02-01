/*
** EPITECH PROJECT, 2024
** my_print_revalpha
** File description:
** isplays the lowercase alphabe in descending order, on a single line
*/

void my_putchar(char c);

int my_print_revalpha(void)
{
    char start = 'z';

    while (start >= 'a') {
        my_putchar(start);
        start--;
    }
    return (0);
}
