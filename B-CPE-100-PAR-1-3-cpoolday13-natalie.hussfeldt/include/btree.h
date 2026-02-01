/*
** EPITECH PROJECT, 2024
** btree
** File description:
** structure
*/

typedef struct btree {
    struct btree *left;
    struct btree *right;
    void *item;
} btree_t;
