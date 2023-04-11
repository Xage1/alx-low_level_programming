#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dimensional grid
 * @grid: A pointer to the 2D array to be freed
 * @height: Height of the array
 * Return: Always 0
 */
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
