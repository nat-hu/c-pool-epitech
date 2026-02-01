/*
** EPITECH PROJECT, 2024
** my_is_prime
** File description:
** returns 1 if the number is prime and 0
** if not
*/

int my_is_prime(int nb)
{
    int count = 0;

    if (nb <= 1) {
        return 0;
    }
    for (int div = 1; div <= nb; div++) {
        if (nb % div == 0){
            count++;
        }
    }
    if (count > 2) {
        return 0;
    }
    return 1;
}
