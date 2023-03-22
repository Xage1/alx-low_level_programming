#include <stdio.h>
/**
* main - fibonacci sequence
*
* Purpose - no hardcode
*
* Return:  (Success)
*/


int main(void)
{
int i;
unsigned long int prev1 = 1, prev2 = 2, curr;

printf("%lu, %lu", prev1, prev2);

for (i = 3; i <= 98; i++)
{
curr = prev1 + prev2;
printf(", %lu", curr);
prev1 = prev2;
prev2 = curr;
}

printf("\n");

return (0);
}

