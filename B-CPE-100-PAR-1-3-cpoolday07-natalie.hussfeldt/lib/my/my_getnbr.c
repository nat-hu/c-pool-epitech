/*
** EPITECH PROJECT, 2024
** my_getnbr
** File description:
** function that returns a number
** sent to function as string
*/

int check_overflow(int result, int digit, int sign_of_num)
{
    int max = 2147483647;
    int min = -2147483648;

    if (sign_of_num == 1) {
        if (result > max / 10 || (result == max / 10 && digit > max % 10)) {
            return 1;
        }
    } else {
        if (result > -(min / 10) ||
            (result == -(min / 10) && digit > -(min % 10))) {
            return 1;
        }
    }
    return 0;
}

int check_whitespaces(int index, char const *str)
{
    while (str[index] == ' ') {
        index++;
    }
    return index;
}

int check_sign_of_num(int index, int *sign_of_num, char const *str)
{
    while (str[index] == '-' || str[index] == '+') {
        if (str[index] == '-') {
            *sign_of_num *= -1;
        } else {
            *sign_of_num *= 1;
        }
        index++;
    }
    return index;
}

int my_getnbr(char const *str)
{
    int sign_of_num = 1;
    int result = 0;
    int index = 0;
    int digit;

    index = check_whitespaces(index, str);
    index = check_sign_of_num(index, &sign_of_num, str);
    while (str[index] >= '0' && str[index] <= '9') {
        digit = str[index] - '0';
        if (check_overflow(result, digit, sign_of_num)) {
            return 0;
        }
        result = 10 * result + digit;
        index++;
    }
    return result * sign_of_num;
}
