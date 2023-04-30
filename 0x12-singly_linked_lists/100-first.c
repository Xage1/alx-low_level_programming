#include <stdio.h>
#include "lists.h"

/**
 * __attribute__((constructor)) print_chat - prints a message
 * Return: Void
 */

void __attribute__((constructor)) print_chat()
{
printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
