/*
** EPITECH PROJECT, 2024
** my_find_prime_sup
** File description:
**  returns the smallest prime number
** that is greater than, or equal
** to the number given
*/

int my_is_prime(int nb);
int my_find_prime_sup(int nb)
{
    int greater_i = nb;
    int is_prime = my_is_prime(nb);

    if (is_prime == 1) {
        return nb;
    }
    while (is_prime != 1) {
        greater_i++;
        is_prime = my_is_prime(greater_i);
    }
    return greater_i;
}
