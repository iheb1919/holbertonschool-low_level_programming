#include "lists.h"
/**
 * insert_dnodeint_at_index - insert a node
 * @h: pointer
 * @idx: int
 * @n: int
 * Return: 1 or 0
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new = NULL, *node = NULL;
if (!h)
return (NULL);
if (idx == 0)
return (add_dnodeint(h, n));
node = *h;
while (node && --idx && node->next)
node = node->next;
if (idx)
return (NULL);
new = malloc(sizeof(*new));
if (!new)
return (NULL);
new->n = n;
new->prev = node;
new->next = node->next;
if (node->next)
node->next->prev = new;
node->next = new;
return (new);
}
