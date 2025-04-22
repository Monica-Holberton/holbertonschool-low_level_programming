#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node_end - adds a new node at the end of a list_t list
* @head: double pointer to the head of the list
* @str: string to duplicate and add in the new node
*
* Return: address of the new element, or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node, *temp;
char *dup_str;
unsigned int len = 0;

/* Duplicate the string */
if (str != NULL)
{
dup_str = strdup(str);
if (dup_str == NULL)
return (NULL); /* strdup failed */
while (str[len])
len++;
}
else
{
dup_str = NULL;
len = 0;
}

/* Allocate memory for the new node */
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
{
free(dup_str); /* Free the duplicated string if malloc fails */
return (NULL);
}

/* Initialize the new node */
new_node->str = dup_str;
new_node->len = len;
new_node->next = NULL;

/* If the list is empty, set head to new node */
if (*head == NULL)
{
*head = new_node;
}
else
{
/* Otherwise, traverse to the end and add node */
temp = *head;
while (temp->next != NULL)
temp = temp->next;
temp->next = new_node;
}

return (new_node);
}
