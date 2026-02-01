/*
** EPITECH PROJECT, 2024
** task04
** File description:
** program that displays all the arguments
*/

void my_putstr(char const *str);
void my_putchar(char c);
int main(int argc, char **argv)
{
    for (int i = 0; i < argc; i++) {
        my_putstr(argv[i]);
        my_putchar('\n');
    }
    return 0;
}
