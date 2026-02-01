/*
** EPITECH PROJECT, 2024
** my_strcapitalize
** File description:
** capitalizes the first letter of each
** word
*/

int check_is_letter(char c);
char to_upper(char c)
{
    if (c >= 'a' && c <= 'z') {
        return c - 32;
    }
    return c;
}

char to_lower(char c)
{
    if (c >= 'A' && c <= 'Z') {
        return c + 32;
    }
    return c;
}

char capitalize_letter(char c, int begin_new_word)
{
    if (begin_new_word) {
        return to_upper(c);
    } else {
        return to_lower(c);
    }
}

void transform_string(char *str, int *begin_new_word, int i)
{
    if (check_is_letter(str[i])) {
            str[i] = capitalize_letter(str[i], *begin_new_word);
            *begin_new_word = 0;
    } else if (str[i] < '0' || str[i] > '9') {
            *begin_new_word = 1;
    } else {
            *begin_new_word = 0;
    }
}

char *my_strcapitalize(char *str)
{
    int i = 0;
    int begin_new_word = 1;

    while (str[i] != '\0') {
        transform_string(str, &begin_new_word, i);
        i++;
    }
    return str;
}
