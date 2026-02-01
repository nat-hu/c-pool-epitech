/*
** EPITECH PROJECT, 2024
** my_str_isnum
** File description:
** returns 1 if the string passed as parameter
** only contains digits and 0 otherwise
*/

static int is_digit(char c)
{
    return (c >= '0' && c <= '9');
}

int my_str_isnum(char const *str)
{
    int i = 0;

    if (str[0] == '\0') {
        return 1;
    }
    while (str[i] != '\0') {
        if (is_digit(str[i] != 1)) {
            return 0;
        }
        i++;
    }
    return 1;
}
