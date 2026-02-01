/*
** EPITECH PROJECT, 2024
** my_str_to_word_array
** File description:
** splits a string into words
** Separators will all be non-alphanumeric chars
*/
#include <stdlib.h>
#include <stdio.h>
#include <my.h>

int check_is_digit(char c)
{
    return (c >= '0' && c <= '9');
}

int count_words_in_str(char const *str)
{
    int count = 0;
    int same_word = 0;

    if (str == NULL)
        return 0;
    for (int i = 0; str[i]; i++) {
        if (check_is_letter(str[i]) || check_is_digit(str[i]) && !same_word) {
            same_word = 1;
            count++;
        }
        if (!check_is_letter(str[i]) && !check_is_digit(str[i])) {
            same_word = 0;
        }
    }
    return count;
}

int get_word_length(char const *str, int i)
{
    int len = 0;

    while (check_is_letter(str[i]) || check_is_digit(str[i])) {
        len++;
        i++;
    }
    return len;
}

int copy_word(char **word_array, char const *str, int i, int word_index)
{
    int len = get_word_length(str, i);
    int size_of_char = 1;

    word_array[word_index] = malloc((len + 1) * size_of_char);
    for (int j = 0; j < len; j++) {
        word_array[word_index][j] = str[i];
        i++;
    }
    word_array[word_index][len] = '\0';
    return i;
}

char **my_str_to_word_array(char const *str)
{
    int num_words = count_words_in_str(str);
    int i = 0;
    int word_index = 0;
    char **word_array;

    if (str == NULL)
        return 0;
    word_array = malloc((num_words + 1) * sizeof(char *));
    if (!word_array)
        return 0;
    while (str[i]) {
        if (check_is_letter(str[i]) || check_is_digit(str[i])) {
            i = copy_word(word_array, str, i, word_index);
            word_index++;
        } else {
            i++;
        }
    }
    word_array[word_index] = 0;
    return word_array;
}
