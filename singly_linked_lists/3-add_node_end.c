#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the pointer of the head node
 * @str: string to be duplicated and added to the new node
 *
 * Return: address of the new element, or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node;
list_t *last_node;

if (str == NULL)
return (NULL);

/* Allocate memory for the new node */
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);

/* Duplicate the input string */
new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}

/* Set fields of new node */
new_node->len = strlen(str);
new_node->next = NULL;

/* If the list is empty, set new node as the head */
if (*head == NULL)
{
*head = new_node;
return (new_node);
}

/* Check the end of the list */
last_node = *head;
while (last_node->next != NULL)
last_node = last_node->next;

/* Add new node at the end */
last_node->next = new_node;

return (new_node);
}
