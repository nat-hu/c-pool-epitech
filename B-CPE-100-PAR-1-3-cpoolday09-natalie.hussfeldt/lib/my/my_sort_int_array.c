/*
** EPITECH PROJECT, 2024
** my_sort_int_array
** File description:
** sorts an integer array in ascending order
*/

static void sort_the_numbers(int *array, int cur_i, int next_i, int t)
{
    if (*(array + next_i) < *(array + cur_i)) {
        t = *(array + cur_i);
        *(array + cur_i) = *(array + next_i);
        *(array + next_i) = t;
    }
}

void my_sort_int_array(int *array, int n)
{
    int current_index;
    int next_index;
    int t;

    for (current_index = 0; current_index < n; current_index++) {
        for (next_index = current_index + 1; next_index < n; next_index++) {
            sort_the_numbers(array, current_index, next_index, t);
        }
    }
}
