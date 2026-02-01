/*
** EPITECH PROJECT, 2024
** my_strncat
** File description:
** concatenates n characters of the src string
** to the end of the dest string
*/
int my_strlen(char const *str);
char *my_strncat(char *dest, char const *src, int nb)
{
    int len_src = my_strlen(src);
    int len_dest = my_strlen(dest);
    int j = 0;

    for (; src[j] != '\0' && j < nb; j++) {
        dest[len_dest + j] = src[j];
    }
    dest[len_dest + j] = '\0';
    return dest;
}
