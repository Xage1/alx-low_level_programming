#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list.
 * @h: Pointer to the pointer to the head of the linked list.
 *
 * Return: The size of the list that was freed.
 */

size_t free_listint_safe(listint_t **h)
{

listint_t *current, *tmp;
size_t count = 0;

if (h == NULL || *h == NULL)

return (0);

current = *h;

while (current)
{

tmp = current;
current = current->next;
count++;
free(tmp);

if (tmp <= current)
{
*h = NULL;
break;
}
}

return (count);

}
