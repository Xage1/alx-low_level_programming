#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
char expectedPassword[] = "Hol";

if (argc < 2)
{
printf("Password argument missing.\n");
return (1);
}

if (strcmp(argv[1], expectedPassword) == 0)
{
printf("Congratulations!\n");
}
else
{
printf("Wrong password.\n");
}
return (0);
}
