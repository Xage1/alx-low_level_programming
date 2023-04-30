#include <stdlib.h>
#include <string.h>
#include "lists.h"
#include <stdio.h>

/**
 * _strlen - function that returns the length of a string
 * @k: Character
 * Return:i
 */

int _strlen(const char *k)
{
int i = 0;

while (k[i] != '\0')
{
i++;
}
return (i);
}



/**
 * add_node - adds a new node at the beginnig of a list_ list
 * @head: pointer to the head of the list
 * @str: string to be added as the new node
 * Return: the address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
new_node = malloc(sizeof(list_t));
{
if (new_node == NULL)
return (NULL);
}

new_node->str = strdup(str);
new_node->len = strlen(str);
new_node->next = *head;
*head = new_node;

return (new_node);
}
