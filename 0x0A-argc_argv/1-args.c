#include "main.h"
#include <stdio.h>

/**
 * main - Start of main function
 * @argc: The number of command line arguments
 * @argv: An array containing the program command line arguments.
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
int count;
(void)argv;
for (count = 0; count < argc; count++)
{
if (count + 1 == argc)
printf("%i\n", count);
}
return (0);
}
