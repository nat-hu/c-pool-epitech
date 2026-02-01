/*
** EPITECH PROJECT, 2024
** my_strncpy
** File description:
** function that copies n
** character from one string
** to another
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    for (int i = 0; i < n; i++) {
        dest[i] = src[i];
    }
    return dest;
}
