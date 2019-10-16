#include "holberton.h"
#include "stdlib.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array
 * @width: integer for columns
 * @height: integer for rows
 *
 * Return: Always 0
 */
int **alloc_grid(int width, int height)
{
int i, j, **grid;
if (width <= 0 || height <= 0)
return (NULL);
grid = malloc(sizeof(int *) * height);
if (grid)
{
for (i = 0; i < height; i++)
{
grid[i] = malloc(sizeof(int) * width);
if (grid[i] == NULL)
{
while (i-- >= 0)
free(grid[i]);
free(grid);
return (NULL);
}
for (j = 0; j < width; j++)
grid[i][j] = 0;
}
}
return (grid);
}
