/*
** EPITECH PROJECT, 2024
** my_evil_str
** File description:
** swaps each of the string’s characters
** two by two
*/

int my_strlen(char const *str);
char *my_evil_str(char *str)
{
    int len = my_strlen(str) - 1;
    int i;
    char temp;

    if (len < 2) {
        return (str);
    }
    for (i = 0; i < ((len + 1) / 2); i++) {
        temp = *(str + i);
        (*(str + i) = *(str + len - i));
        *(str + len - i) = temp;
    }
    return (str);
}
