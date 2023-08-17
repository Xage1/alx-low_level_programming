#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index index of a dlistint_t linked list.
 * @head: Pointer to a pointer to the head of the linked list.
 * @index: Index of the node that should be deleted.
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current = *head;
unsigned int i;

if (*head == NULL)
return (-1);

if (index == 0)
{
*head = (*head)->next;
if (*head != NULL)
(*head)->prev = NULL;
free(current);
return (1);
}
for (i = 0; i < index; i++)
{
if (current == NULL)
return (-1);
current = current->next;
}
if (current == NULL)
return (-1);

if (current->prev != NULL)
current->prev->next = current->next;

if (current->next != NULL)
current->next->prev = current->prev;

free(current);
return (1);
}
