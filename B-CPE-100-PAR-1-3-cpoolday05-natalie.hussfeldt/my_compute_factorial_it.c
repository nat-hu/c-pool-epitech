/*
** EPITECH PROJECT, 2024
** my_compute_factorial_it
** File description:
** iterative function
** returns the factorial of the number
** given as parameter
*/

int check_errors(int nb, int *flag_error)
{
    if (nb < 0 || nb > 12) {
        *flag_error = 1;
        return 0;
    }
    if (nb == 0){
        *flag_error = 1;
        return 1;
    }
    return 1;
}

int my_compute_factorial_it(int nb)
{
    int result = 1;
    int i;
    int flag_error = 0;

    result = check_errors(nb, &flag_error);
    if (flag_error) {
        return result;
    }
    for (i = 1; i <= nb; i++) {
        result *= i;
    }
    return result;
}
