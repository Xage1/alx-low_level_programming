#include <stdio.h>
#include "main.h"


/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: Pointer to the binary string
 * Return: The converted number, of 0 if an error occurs
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int num = 0;
unsigned int i;

if (b == NULL)
return (0);

for (i = 0; b[i] != '\0'; i++)
{
if (b[i] != '0' && b[i] != '1')

return (0);

num = (num * 2) + (b[i] - '0');
}
return (num);
}
