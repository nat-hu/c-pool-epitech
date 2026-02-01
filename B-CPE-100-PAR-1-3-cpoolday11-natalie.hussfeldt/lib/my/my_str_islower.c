/*
** EPITECH PROJECT, 2024
** my_str_islower
** File description:
** returns 1 if the string passed as
** parameter only contains lowercase
** alphabetical characters and 0
** otherwise
*/

int my_str_islower(char const *str)
{
    int i = 0;

    if (str[0] == '\0') {
        return 1;
    }
    while (str[i] != '\0') {
        if (str[i] < 'a' || str[i] > 'z') {
            return 0;
        }
        i++;
    }
    return 1;
}
