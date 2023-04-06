#include "main.h"
/**
 * sqrt_me - Function to compute the sqrt of a starting from b
 * @a: number
 * @b: number of power
 * Return: Always 0.
 */

int sqrt_me(int a, int b)
{
if (b * b == a)
{
return (b);
}
else if (b * b > a)
{
return (-1);
}
return (sqrt_me(a, b + 1));
}

/**
 * _sqrt_recursion - function in the main.h header file
 * @n: number
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
return (sqrt_me(n, 0));
}
