#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - prints the opcodes of its own main function
 * @num_bytes: the number of bytes of opcodes to print
 */
void print_opcodes(int num_bytes);

/**
 * main - the main function of the program
 * @argc: the number of command-line arguments
 * @argv: an array of command-line argument strings
 *
 * Return: 0 on success, 1 if incorrect number of arguments, or 2 if num_bytes is negative
 */
int main(int argc, char *argv[])
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
printf("%02x", ptr[i]);
}
printf("\n");
}

