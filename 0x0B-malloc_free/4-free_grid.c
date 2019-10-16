#include "holberton.h"
#include "stdlib.h"
/**
 * free_grid - frees a 2d-array
 * @grid: pointer input
 * @height: integer for rows in grid
 */
void free_grid(int **grid, int height)
{
while (--height >= 0)
free(grid[height]);
free(grid);
}
