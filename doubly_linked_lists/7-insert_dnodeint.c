#include "lists.h"
#include <stdlib.h>

/**
 * create_node - creates a new dlistint_t node
 * @n: value to assign to the node
 *
 * Return: pointer to the new node, or NULL if failed
 */
dlistint_t *create_node(int n)
{
dlistint_t *new = malloc(sizeof(dlistint_t));

if (new == NULL)
return (NULL);
new->n = n;
new->prev = NULL;
new->next = NULL;
return (new);
}

/**
* insert_dnodeint_at_index - inserts a new node at a given position
* @h: double pointer to the head of the list
* @idx: index at which to insert the new node (starting at 0)
* @n: data (n) to insert into the new node
*
* Return: address of the new node, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new, *current;
unsigned int i = 0;

if (h == NULL)
return (NULL);

if (idx == 0)
return (add_dnodeint(h, n));

current = *h;
while (current != NULL && i < idx - 1)
{
current = current->next;
i++;
}
if (current == NULL)
return (NULL);

if (current->next == NULL)
return (add_dnodeint_end(h, n));

new = create_node(n);
if (new == NULL)
return (NULL);

new->next = current->next;
new->prev = current;
current->next->prev = new;
current->next = new;

return (new);
}
