#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the head of the linked list.
 *
 * Return: The number of nodes in the list.
 */


size_t print_listint_safe(const listint_t *head)
{
const listint_t *slow, *fast;
size_t count = 0;

slow = fast = head;

while (slow && fast && fast ->next)
{

slow = slow->next;
fast = fast->next->next;
count++;

if (slow == fast)
{

printf("[%p] %d\n", (void *)head, head->n);
exit(98);
}
}

slow = head;
while (slow)
{
printf("[%p] %d\n", (void *)slow, slow->n);
slow =slow->next;
count++;
}

return (count);
}
