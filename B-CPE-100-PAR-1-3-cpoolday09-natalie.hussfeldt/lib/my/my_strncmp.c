/*
** EPITECH PROJECT, 2024
** my_strncmp
** File description:
** compare at most a specified number of characters
** from two null-terminated strings
** return:
** Negative, if the str1 is less than str2
** Positive, if the str2 is less than str1
** zero, if the str1 is equal to str2
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int j = 0;
    int i;

    for (j = 0; j < n; j++){
        if (s1[j] != s2[j]){
            i = (s1[j] > s2[j]) ? 1 : -1;
            return i;
        }
    }
    return 0;
}
