#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
int len1, len2, i, j, c = 0;
int *result;
if (argc != 3)
{
printf("Error\n");
return (98);
}
len1 = strlen(argv[1]);
len2 = strlen(argv[2]);
for (i = 0; i < len1; i++)
{
if (argv[1][i] < '0' || argv[1][i] > '9')
{
printf("Error\n");
return (98);
}
}
for (i = 0; i < len2; i++)
{
if (argv[2][i] < '0' || argv[2][i] > '9')
{
printf("Error\n");
return (98);
}
}
result = calloc(len1 + len2, sizeof(int));
if (result == NULL)
{
printf("Error\n");
return (98);
}
for (i = len1 - 1; i >= 0; i--)
{
c = 0;
for (j = len2 - 1; j >= 0; j--)
{
c += result[i + j + 1] + (argv[1][i] - '0') * (argv[2][j] - '0');
result[i + j + 1] = c % 10;
c /= 10;
}
result[i] += c;
}
i = 0;
while (i < len1 + len2 - 1 && result[i] == 0)
i++;
for (; i < len1 + len2; i++)
printf("%d", result[i]);
printf("\n");
free(result);
return (0);
}
