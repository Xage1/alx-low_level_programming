#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2 dimensional array
 * @height : height of array
 * @width : width of the array
 * Return: Always 0
 */
int **alloc_grid(int width, int height)
{
int i, j;
int **grid = malloc(height * sizeof(int *));

if (width <= 0 || height <= 0)
{
return (NULL);
}
if (grid == NULL)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
grid[i] = malloc(width * sizeof(int));

if (grid[i] == NULL)
{
for (j = 0; j < i; j++)
{
free(grid[j]);
}
free(grid);
return (NULL);
}
for (j = 0; j < width; j++)
{
grid[i][j] = 0;
}
}
return (grid);
}
