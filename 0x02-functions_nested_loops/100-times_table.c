#include <stdio.h>
#include "main.h"

/**
 * print_times_table - This function prints the n times table, starting with 0
 * If n < 0 or > 15, the function simply returns without printing anything.
 * @n: number input
 * Return: Always 0 (Success)
 */
void print_times_table(int n)
{
int i, j;
if (n < 0 || n > 15)
{
return;
}
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
printf("%4d", i * j);
}
printf("\n");
}
}
