#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes the node at a given index
 * @head: double pointer to the head of the list
 * @index: index of the node to delete (starting at 0)
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *node = *head;
unsigned int i = 0;

if (head == NULL || *head == NULL)
return (-1);

/* Delete head node */
if (index == 0)
{
*head = node->next;
if (node->next != NULL)
node->next->prev = NULL;
free(node);
return (1);
}

/* Find node to delete */
while (node != NULL && i < index)
{
node = node->next;
i++;
}

if (node == NULL)
return (-1);

/* Update pointers */
if (node->prev != NULL)
node->prev->next = node->next;
if (node->next != NULL)
node->next->prev = node->prev;

free(node);
return (1);
}
