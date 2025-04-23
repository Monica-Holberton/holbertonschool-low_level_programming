#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * create_node - creates and initializes a new node
 * @str: the string to store in the new node
 *
 * Return: pointer to the new node, or NULL on failure
 */
list_t *create_node(const char *str)
{
list_t *new_node;
char *dup_str;
unsigned int len = 0;

if (str)
{
dup_str = strdup(str);
if (!dup_str)
return (NULL);
while (str[len])
len++;
}
else
{
dup_str = NULL;
len = 0;
}

new_node = malloc(sizeof(list_t));
if (!new_node)
{
free(dup_str);
return (NULL);
}

new_node->str = dup_str;
new_node->len = len;
new_node->next = NULL;

return (new_node);
}

/**
* add_node_end - adds a new node at the end of a list_t list
* @head: double pointer to the head of the list
* @str: string to duplicate and add to the new node
*
* Return: address of the new element, or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node, *temp;

new_node = create_node(str);
if (!new_node)
return (NULL);

if (*head == NULL)
*head = new_node;
else
{
temp = *head;
while (temp->next)
temp = temp->next;
temp->next = new_node;
}

return (new_node);
}
