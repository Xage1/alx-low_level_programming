#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_opcodes - Prints the opcodes of a given function
 * @num_bytes: The number of bytes of the function to print
 */
void print_opcodes(int num_bytes);

/**
 * main - Entry point of the program
 *
 * @argc: The number of command-line arguments
 * @argv: An array of pointers to the command-line arguments
 *
 * Return: 0 if successful, 1 if incorrect arguments, 2 if negative bytes
 */
int main(int argc, char **argv)
{
if (argc != 2)
{
printf("Error\n");
return (1);
}
int num_bytes = atoi(argv[1]);
if (num_bytes < 0)
{
printf("Error\n");
return (2);
}
print_opcodes(num_bytes);
return (0);
}

void print_opcodes(int num_bytes)
{
unsigned char *ptr = (unsigned char *)print_opcodes;
int i;
for (i = 0; i < num_bytes; i++)
{
printf("%02x ", *(ptr + i));
}
printf("\n");
}

