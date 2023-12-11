#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * min - Returns the minimum of two values
 * @a: First value
 * @b: Second value
 *
 * Return: The minimum of a and b
 */
size_t min(size_t a, size_t b)
{
return ((a < b) ? a : b);
}

/**
 * jump_search - Searches for a value in a sorted array using jump search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index of the first occurrence of 'value' in 'array', or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
size_t step;
size_t prev = 0;

if (array == NULL || size == 0)
return (-1);

step = sqrt(size);

printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
while (array[min(step, size) - 1] < value)
{
prev = step;
step += sqrt(size);
if (prev >= size)
{
printf("Value found between indexes [%lu] and [%lu]\n", prev - step, prev - 1);
return (-1);
}
printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
}

while (array[prev] < value)
{
printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
prev++;
if (prev == min(step, size))
break;
}

if (array[prev] == value)
{
printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
return ((int)prev);
}

printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
printf("Value found between indexes [%lu] and [%lu]\n", prev - 1, prev);
return (-1);
}
