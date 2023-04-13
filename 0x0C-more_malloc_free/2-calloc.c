#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - function that allocates memory for an array
 * @size: Given integer
 * @nmemb: Given integer
 * Return: Always 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *result;
size_t total_size;

if (nmemb == 0 || size == 0)
{
return (NULL);
}

total_size = nmemb * size;
result = malloc(total_size);
if (result == NULL)
{
return (NULL);
}
memset(result, 0, total_size);

return (result);
}
