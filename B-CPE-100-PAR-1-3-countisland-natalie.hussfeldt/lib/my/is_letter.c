/*
** EPITECH PROJECT, 2024
** is letter
** File description:
** checks if char is a letter
*/

int check_is_letter(char c)
{
    if ((c >= 'a' && c <= 'z')
    || (c >= 'A' && c <= 'Z')) {
        return 1;
    }
    return 0;
}
