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
int total_length = 0;
int pos = 0;
int i;
char *result = (char *) malloc(total_length * sizeof(char));
{
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
total_length += strlen(av[i]) + 1;
}
if (result == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
strcpy(result + pos, av[i]);
pos += strlen(av[i]);
result[pos] = '\n';
pos++;
}
result[pos] = '\0';
return (result);
}
}
