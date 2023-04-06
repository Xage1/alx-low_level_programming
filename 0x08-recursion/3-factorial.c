#include <stdio.h>
#include "main.h"

/**
 * factorial - check the code in the main.h header file.
 * @n: number of factorial
 * Return: Always 0.
 */

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else
{
int i , result = (1);
for (i = 1; i <= n; ++i)
{
result *= i;
}
return (result);
}
}
