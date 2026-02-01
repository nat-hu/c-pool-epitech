/*
** EPITECH PROJECT, 2024
** my_compute_square_root
** File description:
** returns the square root
*/

int my_compute_square_root(int nb)
{
    int target = 0;

    if (nb < 0) {
        return 0;
    }
    while (target * target < nb) {
        target++;
    }
    if (target * target == nb) {
        return target;
    } else {
        return 0;
    }
}
