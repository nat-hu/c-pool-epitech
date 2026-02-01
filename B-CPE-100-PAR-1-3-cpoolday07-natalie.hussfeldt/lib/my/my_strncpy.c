/*
** EPITECH PROJECT, 2024
** my_strncpy
** File description:
** function that copies n
** character from one string
** to another
*/
int my_strlen(char const *str);
char *my_strncpy(char *dest, char const *src, int n)
{
    int len = my_strlen(src);
    int i = 0;

    for (; i < n && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    for (; i < n; i++) {
        if (n < len) {
            dest[i] = '\0';
        }
    }
    return dest;
}
