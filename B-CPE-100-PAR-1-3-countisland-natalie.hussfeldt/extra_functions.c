/*
** EPITECH PROJECT, 2024
** count island
** File description:
** extra functions
*/
#include "my.h"

int count_island(char **world)
{
    int num_rows = get_row_count(world);
    int num_cols = get_column_count(world[0]);
    int island_count = 0;

    if (num_rows <= 0 || num_cols <= 0) {
        return 0;
    }
    for (int r = 0; r < num_rows; r++) {
        for (int c = 0; c < num_cols; c++) {
            if (world[r][c] == 'X') {
                explore_island(world, r, c, island_count++);
            }
        }
    }
    return island_count;
}
