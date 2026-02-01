/*
** EPITECH PROJECT, 2024
** my_compute_factorial_rec
** File description:
** recursive function that return
** the factorial
*/

int check_errors_2(int nb, int *flag_error)
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

int my_compute_factorial_rec(int nb)
{
    int result = 1;
    int flag_error = 0;

    result = check_errors_2(nb, &flag_error);
    if (flag_error) {
        return result;
    }
    return nb * my_compute_factorial_rec(nb - 1);
}
