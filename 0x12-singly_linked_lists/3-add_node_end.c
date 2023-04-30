#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer to the head of the list.
 * @str: string to be added as the new node.
 *
 * Return: the address of the new element, or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *add_node, *temp;

add_node = malloc(sizeof(list_t));
if (add_node == NULL)
return (NULL);

add_node->str = strdup(str);
if (add_node->str == NULL)
{
free(add_node);
return (NULL);
}

add_node->len = strlen(str);
add_node->next = NULL;

if (*head == NULL)
{
*head = add_node;
}
else
{
temp = *head;
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = add_node;
}

return (add_node);
}
