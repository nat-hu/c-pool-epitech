/*
** EPITECH PROJECT, 2024
** my_str_isalpha
** File description:
** returns 1 if the string passed as parameter
** only contains alphabetical characters
** and 0 if the string contains another
** type of character
*/

int is_letter(char c)
{
    if ((c >= 'a' && c <= 'z')
    || (c >= 'A' && c <= 'Z')) {
        return 1;
    }
    return 0;
}

int my_str_isalpha(char const *str)
{
    int i = 0;

    if (str[0] == '\0') {
        return 1;
    }
    while (str[i] != '\0') {
        if (!is_letter(str[i])) {
            return 0;
        }
        i++;
    }
    return 1;
}
