/*
** EPITECH PROJECT, 2024
** Testing
** File description:
** to test your functions
*/


void my_putchar(char c);
int my_put_nbr(int nb);
int main(void)
{
    my_put_nbr(-2147483648);
    my_putchar('\n');
    my_put_nbr(2147483647);
    my_put_nbr(0);
    return (0);
}
