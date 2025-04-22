#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @head: Double pointer to the head of the list
 * @str: String to be duplicated and added to the new node
 *
 * Return: Address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
char *dup_str;
unsigned int len = 0;

if (str == NULL)
return (NULL);

/* Duplicate the input string */
dup_str = strdup(str);
if (dup_str == NULL)
return (NULL);

/* Allocate memory for the new node */
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
{
free(dup_str);
return (NULL);
}

/* Calculate length of the string */
while (str[len])
len++;

/* Fill in the new node */
new_node->str = dup_str;
new_node->len = len;
new_node->next = *head;

/* Update head to point to new node */
*head = new_node;

return (new_node);
}
