#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array using linear search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index of the first occurrence of 'value' in 'array', or -1 if not
 */
int linear_search(int *array, size_t size, int value)
{
size_t i = 0;

if (array == NULL)
return (-1);


for (; i < size; i++)
{
printf("Value checked array[%lu] = [%d]\n", i, array[i]);
if (array[i] == value)
return (int)i;
}
return (-1);
}
