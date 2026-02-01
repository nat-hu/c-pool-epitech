/*
** EPITECH PROJECT, 2024
** my_list_size
** File description:
** returns the number of elements on the list
*/
#include "my.h"
#include <stddef.h>

int my_list_size(linked_list_t const *begin)
{
    int num_nodes = 0;
    linked_list_t const *current_node = begin;

    while (current_node != NULL) {
        num_nodes++;
        current_node = current_node->next;
    }
    return num_nodes;
}
