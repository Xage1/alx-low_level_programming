#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings
 * @s1: first sttring to be concatenated
 * @s2: second string to be concatenated
 * Return: Always 0
 */
char *str_concat(char *s1, char *s2)
{
char *concatenated = malloc(strlen(s1) + strlen(s2) + 1);

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
if (concatenated == NULL)
{
return (NULL);
}
strcpy(concatenated, s1);
strcat(concatenated, s2);
return (concatenated);
}
