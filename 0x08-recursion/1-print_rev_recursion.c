#include "main.h"

/**
 * _print_rev_recursion - check the function in the main.h header file.
 * @s: character of a string
 * Return: Always 0.
 */

void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
_print_rev_recursion(s + 1);
_putchar(*s);
}

