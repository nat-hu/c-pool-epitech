/*
** EPITECH PROJECT, 2024
** my_print_comb
** File description:
** displays, in ascending order, all the numbers composed by three
*/

void my_putchar(char c);
int my_print_comb_first(char t1, char t2, char t3)
{
    char n1 = t1;
    char n2 = t2;
    char n3 = t3;

    if (!(n1 == '7' && n2 == '8' && n3 == '9')) {
        my_putchar(',');
        my_putchar(' ');
    }
    return (0);
}

int my_print_comb(void)
{
    int num;
    char c1;
    char c2;
    char c3;

    for (num = 0; num <= 999; num++) {
        c1 = (num / 100) + '0';
        c2 = ((num / 10) % 10) + '0';
        c3 = (num % 10) + '0';
        if (c1 < c2 && c2 < c3) {
            my_putchar(c1);
            my_putchar(c2);
            my_putchar(c3);
            my_print_comb_first(c1, c2, c3);
        }
        }
    return (0);
}
