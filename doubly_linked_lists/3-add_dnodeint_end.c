#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: double pointer to the head of the list
 * @n: integer to store in the new node
 *
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node, *temp;

/* allocate memory for the new node */
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

/* initialize the new node */
new_node->n = n;
new_node->next = NULL;

/* if the list is empty, the new node = header */
if (*head == NULL)
{
new_node->prev = NULL;
*head = new_node;
return (new_node);
}

/* if not, traverse to the last node */
temp = *head;
while (temp->next != NULL)
temp = temp->next;

/* add the new node at the end */
temp->next = new_node;
new_node->prev = temp;

return (new_node);
}
