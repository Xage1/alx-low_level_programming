#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list
 * @head: pointer to the head of the list
 * Return: Void
 */

void free_list(list_t *head)
{
list_t *kk;

while (head != NULL)
{
kk = head;
head = head->next;
free(kk->str);
free(kk);
}
}
