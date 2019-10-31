#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * list_len - number of nodes
 * @h: first element of the list
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
unsigned int i;
i = 1;
if (h == NULL)
return (0);
while (h->next != NULL)
{
i++;
h = h->next;
}
return (i);
}
