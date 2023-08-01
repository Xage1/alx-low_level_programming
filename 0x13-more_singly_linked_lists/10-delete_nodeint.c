#include "lists.h"


/**
 * delete_nodeint_at_index - Deletes the node at index index of a listint_t linked list.
 * @head: Double pointer to the head of the linked list.
 * @index: Index of the node to be deleted. Index starts at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

listint_t *current, *temp;
unsigned int count = 0;



if (*head == NULL)
return (-1);

current = *head;

if (index == 0)
{
*head = current->next;
free(current);

return (1);

}

while (current != NULL && count < index - 1)
{
current = current->next;
count++;
}

if (current == NULL || current ->next == NULL)
return (-1);


temp = current->next;
current->next = temp->next;
free(temp);

return (1);
}
