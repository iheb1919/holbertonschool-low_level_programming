#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked list
 * @h: pointer input
 * Return: return number of elements
 */

size_t listint_len(const listint_t *h)
{
size_t i = 0;
if (h == NULL)
return (0);
while (h)
{
i++;
h = h->next;
}
return (i);
}
