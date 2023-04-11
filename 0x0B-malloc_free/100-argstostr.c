#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: The number of arguments
 * @av: An array of strings containing the arguments
 * Return: Always 0
 */
char *argstostr(int ac, char **av)
{
int i = 0, j, length = 0, l, k;
char *result;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
j = 0;
while (av[i][j] != '\0')
{
j++;
}
length  +=  j + 1;
}
result = malloc(sizeof(char) * (length + 1));
if (result == NULL)
{
return (NULL);
}
length = 0;
for (k = 0; k < ac; k++)
{
for (l = 0; av[k][l] != '\0'; l++)
{
*(result + length) = av[k][l];
length++;
}
*(result + length) = '\n';
length++;
}
return (result);
}
