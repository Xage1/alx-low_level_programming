#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - A function that prints anything
 * @format: A list of types of arguments passed to the function
 * Return: Always 0
 */
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0;
char c;
int integer;
float f;
char *str;

va_start(args, format);
while (format && format[i])
{
switch (format[i])
{
case 'c':
c = va_arg(args, int);
printf("%c", c);
break;
case 'i':
integer = va_arg(args, int);
printf("%d", integer);
break;
case 'f':
f = va_arg(args, double);
printf("%f", f);
break;
case 's':
str = va_arg(args, char *);
if (str != NULL)
printf("%s", str);
else
printf("(nil)");
break;
default:
break;
}
i++;
if (format[i])
{
if (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's')
printf(", ");
}
}
printf("\n");
va_end(args);
}
