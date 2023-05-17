#include <unistd.h>
#include "main.h"

/**
 * _putchar - Writes the character c to stdout
 * @c: The character to print
 * Return: On success 1, on Error -1
 */

int _putchar(char a)
{
return (write(1, &a, 1));
}
