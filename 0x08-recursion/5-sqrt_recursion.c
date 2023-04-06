#include "main.h"

/**
 * _sqrt_recursion - check the code in the main.h header file.
 * @n: number to be squared
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
if (n == 0 || n == 1)
{
return (n);
}
else
{
int i = 1;
while (i * i <= n)
{
if (i * i == n)
{
return (i);
}
i++;
}
return (-1);
}
}
