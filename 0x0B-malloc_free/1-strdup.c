#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space
 * @str: string to be duplicated
 * Return: Always 0
 */
char *_strdup(char *str)
{
int i, j;
char *string;
if (str == NULL)
{
return (0);
}
i = 0;
while (*(str + i) != '\0')
{
i++;
}
string = malloc(i + 1);
if (string == 0)
{
return (0);
}
for (j = 0; j < i; j++)
{
*(string + j) = *(str + j);
}
return (string);
}
