/*
** EPITECH PROJECT, 2024
** my_params_to_list
** File description:
** creates a new list from the
** command line arguments
** address of the list's first node is returned
*/
#include "my.h"
#include <stddef.h>

linked_list_t *my_params_to_list(int argc, char *const *argv)
{
    linked_list_t *list_arguments = NULL;
    linked_list_t *element;

    for (int i = 0; i < argc; i++) {
        element = malloc(sizeof(linked_list_t));
        if (element == NULL) {
            return NULL;
        }
        element->data = argv[i];
        element->next = list_arguments;
        list_arguments = element;
    }
    return list_arguments;
}
