#include "main.h"
/**
*_pow_recursion - Function for calculating power of given numbers
*@x:Base Number
*@y:Number power of
*Return: Always 0.
*/

int _pow_recursion(int x, int y)
{
if (y == 0)
{
return (1);
}
else if (y < 0)
{
return (-1);
}
else
{
return (x * _pow_recursion(x, y - 1));
}
}
