#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Start of main function
 * @argc: The number of command line arguments
 * @argv: An array containing the program command line arguments.
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
int sum, j = 0;
int i = 1;
int num = atoi(argv[i]);
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}
if (num < 0)
{
printf("Error\n");
return (1);
}
sum += num;
}
printf("%d\n", sum);
return (0);
}
