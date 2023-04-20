#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - Function that prints numbers, followed by a new line
 * @separator: The string to be printed between numbers
 * @n: The number of integers passed to function
 * @...: The number of parameters
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{

va_list args;
unsigned int i;
int num = va_arg(args, int);

va_start(args, n);
for (i = 0; i < n; i++)
{
printf("%d", num);

if (i != n - 1 && separator != NULL)
printf("%s", separator);
}
va_end(args);
printf("\n");
}
