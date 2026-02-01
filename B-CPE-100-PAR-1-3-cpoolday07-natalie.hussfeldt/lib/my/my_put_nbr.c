/*
** EPITECH PROJECT, 2024
** my_put_nbr
** File description:
** displays the number given as a parameter
*/

void my_putchar(char c);
int my_put_nbr(int nb);
void handle_positive_number(int nb)
{
    if (nb >= 10) {
        my_put_nbr(nb / 10);
    }
    my_putchar((nb % 10) + '0');
}

int my_put_nbr(int nb)
{
    int min = -2147483648;

    if (nb < 0) {
        my_putchar('-');
        if (nb == min) {
            handle_positive_number(-(nb / 10));
            my_putchar('8');
            return 0;
        }
        nb = -nb;
    }
    handle_positive_number(nb);
    return 0;
}
