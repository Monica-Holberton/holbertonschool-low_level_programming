#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
dlistint_t *new;
dlistint_t hello = {8, NULL, NULL};  /* Initial node (head) */

/* Allocate memory for the new node */
new = malloc(sizeof(dlistint_t));
if (new == NULL)
{
dprintf(2, "Error: Can't malloc\n");
return (EXIT_FAILURE);
}

new->n = 9;  /* Assign a value to the new node */
new->prev = NULL;  /* The new node will be the new head, so it has no previous node */
new->next = &hello;  /* The new node’s next will point to the current hello node */
hello.prev = new;  /* Update the current hello node to point back to the new node */

/* Print the list and get the number of nodes */
print_dlistint(new);
printf("-> 2 elements\n");

free(new);

return (EXIT_SUCCESS);
}
