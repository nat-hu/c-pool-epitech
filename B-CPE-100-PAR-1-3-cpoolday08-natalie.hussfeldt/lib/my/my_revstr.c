/*
** EPITECH PROJECT, 2024
** my_revstr
** File description:
** reverses a string
*/

int my_strlen(char const *str);
char *my_revstr(char *str)
{
    int len = my_strlen(str);
    int start = 0;
    int end = len - 1;
    char temp;

    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
    return str;
}
