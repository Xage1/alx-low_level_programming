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

va_list numbers;
unsigned int i;

if (separator == NULL)
{
separator = "";
}

va_start(numbers, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(numbers, int));
if (n == i + 1)
{
break;
}
printf("%s", separator);
}
printf("\n");
va_end(numbers);
}
