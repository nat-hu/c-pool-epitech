/*
** EPITECH PROJECT, 2024
** my_strcmp
** File description:
** compares two strings by character
** returns 0 if the strings are equal
** returns >0 f the first non-matching character in
** str1 is greater (in ASCII) than that of str2
** returns <0 if its lower
*/

int my_strlen(char const *str);
int my_strcmp(char const *s1, char const *s2)
{
    int len_s1 = my_strlen(s1);
    int len_s2 = my_strlen(s2);

    if (len_s1 != len_s2) {
        return -1;
    }
    for (int j = 0; j < len_s2; j++){
        if (s1[j] != s2[j]){
            return -1;
        }
    }
    return 0;
}
