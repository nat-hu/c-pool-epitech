/*
** EPITECH PROJECT, 2024
** Project 2
** File description:
** count_island
*/
#include <stdio.h>
#include "my.h"

int get_row_count(char **world)
{
    int row_count = 0;

    while (world[row_count]) {
        row_count++;
    }
    return row_count;
}

int get_column_count(char *world)
{
    int col_count = 0;

    while (world[col_count] != '\0') {
        col_count++;
    }
    return col_count;
}

int is_within_grid(int row, int col, int rows, int cols)
{
    return (row >= 0 && row < rows && col >= 0 && col < cols);
}

int is_island_cell(char **world, int row, int col)
{
    return (world[row][col] == 'X');
}

void explore_island(char **world, int row, int col, int island_id)
{
    int rows = get_row_count(world);
    int cols = get_column_count(world[0]);

    if (!is_within_grid(row, col, rows, cols) ||
    !is_island_cell(world, row, col)) {
        return;
    }
    world[row][col] = '0' + island_id;
    explore_island(world, row - 1, col, island_id);
    explore_island(world, row + 1, col, island_id);
    explore_island(world, row, col - 1, island_id);
    explore_island(world, row, col + 1, island_id);
}
