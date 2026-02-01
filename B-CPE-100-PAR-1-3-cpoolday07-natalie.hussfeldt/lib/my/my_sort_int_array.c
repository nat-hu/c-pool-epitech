/*
** EPITECH PROJECT, 2024
** my_sort_int_array
** File description:
** sorts an integer array in ascending order
*/

void sort_the_numbers(int *array, int current_index, int next_index, int t)
{
    if (*(array + next_index) < *(array + current_index)) {
        t = *(array + current_index);
        *(array + current_index) = *(array + next_index);
        *(array + next_index) = t;
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
