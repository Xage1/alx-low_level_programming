#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: A variable for the minimum value
 * @max: Avariable for the maximum value
 * Return:Always 0
 */

int *array_range(int min, int max)
{
int *result;
int size;
int i;
if (min > max)
{
return (NULL);
}
size = max - min + 1;
result = malloc(size *sizeof(int));
if (result == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
result[i] = min + i;
}
return (result);
}

