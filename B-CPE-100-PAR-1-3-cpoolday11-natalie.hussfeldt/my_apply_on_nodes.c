/*
** EPITECH PROJECT, 2024
** my_apply_on_nodes
** File description:
** applies function on all nodes of list
*/
#include <stddef.h>
#include "my.h"

int my_apply_on_nodes(linked_list_t *begin, int (*f)(void *))
{
    linked_list_t *current_node = begin;
    int result = 0;

    while (current_node != NULL) {
        result = (*f)(current_node->data);
        if (result != 0) {
            return result;
        }
        current_node = current_node->next;
    }
    return 0;
}
