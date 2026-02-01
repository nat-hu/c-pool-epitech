/*
** EPITECH PROJECT, 2024
** my_print_comb2
** File description:
** scending order, all the different combinations
** of two two digits
*/

void my_putchar(char c);
int my_print_comb_first2(char t1, char t2, char t3, char t4)
{
    if (!(t1 == '9' && t2 == '8' && t3 == '9' && t4 == '9')) {
        my_putchar(',');
        my_putchar(' ');
    }
    return (0);
}

int my_print_comb_second(int num1, int num)
{
    char c1;
    char c2;
    char c3;
    char c4;

    c1 = ((num1 / 10) % 10) + '0';
    c2 = (num1 % 10) + '0';
    c3 = ((num / 10) % 10) + '0';
    c4 = (num % 10) + '0';
    my_putchar(c1);
    my_putchar(c2);
    my_putchar(' ');
    my_putchar(c3);
    my_putchar(c4);
    my_print_comb_first2(c1, c2, c3, c4);
    return (0);
}

int my_print_comb2(void)
{
    int num;
    int num1;

    for (num1 = 0; num1 <= 98; num1++) {
        for (num = num1 + 1; num <= 99; num++) {
            my_print_comb_second(num1, num);
        }
    }
    return (0);
}
