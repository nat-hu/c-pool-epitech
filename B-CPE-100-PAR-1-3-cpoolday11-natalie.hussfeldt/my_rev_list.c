/*
** EPITECH PROJECT, 2024
** my_rev_list
** File description:
** reverses the order of the list’s elements
*/
#include "my.h"
#include <stddef.h>

void my_rev_list(linked_list_t **begin)
{
    linked_list_t *curr = *begin;
    linked_list_t *prev = NULL;
    linked_list_t *next;

    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    *begin = prev;
}
