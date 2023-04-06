#include "main.h"

/**
 * is_almost_prime - Function for calling initial value n and i
 * @n:number
 * @i:number
 * Return:Always 0.
 */

int is_almost_prime(int n, int i)
{
if (n <= 1 || (n != i && n % i == 0))
{
return (0);
}
else if (n == i)
{
return (1);
}
return (is_almost_prime(n, i + 1));
}

/**
 * is_prime_number - Function that returns 1 if input is prime number
 * @n:number
 * Return:Always 0.
 */

int is_prime_number(int n)
{
return (is_almost_prime(n, 2));
}
