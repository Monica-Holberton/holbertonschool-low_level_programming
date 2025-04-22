#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all elements of a list_t list
 * @h: pointer to the head of the list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
size_t count = 0;

while (h)
{
if (h->str == NULL)  /*Handle NULL strings*/
printf("[0] (nil)\n");
else  /*Print the string and its length*/
printf("[%u] %s\n", h->len, h->str);

count++;
h = h->next;  /*Move to the next node*/
}

return (count);
}
