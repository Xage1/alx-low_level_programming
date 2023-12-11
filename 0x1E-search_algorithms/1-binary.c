#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array using binary search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index of the first occurrence of 'value' in 'array', or -1 if not
 */

int binary_search(int *array, size_t size, int value)
{

size_t left = 0, right = size - 1, mid;
size_t i;

if (array == NULL)
return (-1);

while (left <= right)
{
mid = (left + right) / 2;

printf("Searching in array: %d", array[left]);
for (i = left + 1; i <= right; i++)
printf(", %d", array[i]);
printf("\n");

if (array[mid] == value)
return ((int)mid);

if (array[mid] < value)
left = mid + 1;
else

right = mid - 1;

}
return (-1);
}
