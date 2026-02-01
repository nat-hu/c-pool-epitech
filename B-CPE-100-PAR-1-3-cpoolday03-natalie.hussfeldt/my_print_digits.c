/*
** EPITECH PROJECT, 2024
** my_print_digits
** File description:
** displays all the digits, on a single line, in ascending order
*/

void my_putchar(char c);
int my_print_digits(void)
{
    int i;
    char c;

    for (i = 0; i < 10; i++) {
        c = i + '0';
        my_putchar(c);
    }
    return (0);
}
