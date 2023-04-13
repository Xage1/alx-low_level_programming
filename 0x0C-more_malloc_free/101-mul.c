#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int is_positive_number(char *s);
int *multiply(int *num1, int *num2, int len1, int len2);
void print_number(int *num, int len);
void free_number(int *num);
int *parse_number(char *s, int *len);

/**
 * main - entry point of the program
 * @argc: number of arguments
 * @argv: array of string arguments
 *
 * Return: 0 on success, 98 on failure
 */

int main(int argc, char **argv)
{
int *num1, *num2, *result;
int len1, len2, res_len;
if (argc != 3)
{
printf("Error\n");
return (98);
}
if (!is_positive_number(argv[1]) || !is_positive_number(argv[2]))
{
printf("Error\n");
return (98);
}
num1 = parse_number(argv[1], &len1);
num2 = parse_number(argv[2], &len2);
result = multiply(num1, num2, len1, len2);
res_len = len1 + len2 - 1;
print_number(result, res_len);
printf("\n");
free_number(num1);
free_number(num2);
free_number(result);
return (0);
}

/**
 * is_positive_number - checks if a string represents a positive number
 * @s: string to be checked
 *
 * Return: 1 if s is a positive number, 0 otherwise
 */

int is_positive_number(char *s)
{
int i = 0;
while (s[i])
{
if (!isdigit(s[i]))
return (0);
i++;
}
return (1);
}

/**
 * parse_number - parses the input arguments into integer arrays
 * @s: string to be parsed
 * @len: Length of integer array
 * Return: length of the integer array
 */

int *parse_number(char *s, int *len)
{
int i = 0;
int *num;
*len = strlen(s);
num = malloc(sizeof(int) * (*len));
while (s[i])
{
num[i] = s[i] - '0';
i++;
}
return (num);
}
/**
 * multiply - multiplies two integer arrays and returns a new integer array
 * @num1: first integer array to be multiplied
 * @len1: length of the first integer array
 * @num2: second integer array to be multiplied
 * @len2: length of the second integer array
 *
 * Return: pointer to the resulting integer array
 */

int *multiply(int *num1, int *num2, int len1, int len2)
{
int *result = malloc(sizeof(int) * (len1 + len2));
int i, j;
for (i = 0; i < len1 + len2; i++)
result[i] = 0;
for (i = len1 - 1; i >= 0; i--)
{
for (j = len2 - 1; j >= 0; j--)
{
result[i + j + 1] += num1[i] * num2[j];
result[i + j] += result[i + j + 1] / 10;
result[i + j + 1] %= 10;
}
}
return (result);
}

/**
 * print_number - prints an integer array
 * @num: integer array to be printed
 * @len: length of the integer array
 */

void print_number(int *num, int len)
{
int i;
for (i = 0; i < len; i++)
printf("%d", num[i]);
}

/**
 * free_number - frees the memory allocated to an integer array
 * @num: integer array to be freed
 */

void free_number(int *num)
{
free(num);
}

