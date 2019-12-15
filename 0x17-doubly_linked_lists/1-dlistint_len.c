#include "lists.h"
/**
 * dlistint_len - number of nodes
 * @h: pointer
 * Return: return nimber of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
int i = 0;
if (!h)
return (0);
while (h)
{
i++;
h = h->next;
}
return (i);
}
