/*
** EPITECH PROJECT, 2024
** my_strcat
** File description:
** concatenates two strings
*/

int my_strlen(char const *str);
char *my_strcat(char *dest, char const *src)
{
    int len_dest = my_strlen(dest);
    int j = 0;

    for (; src[j] != '\0'; j++) {
        dest[len_dest + j] = src[j];
    }
    dest[len_dest + j] = '\0';
    return dest;
}
