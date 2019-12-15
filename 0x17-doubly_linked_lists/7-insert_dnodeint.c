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
dlistint_t *new, *current;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *h;
		*h = new;
		return (new);
	}

	current = *h;

	while (i < idx - 1)
	{
		if (current == NULL)
		{
			free(new);
			return (NULL);
		}

		current = current->next;
		i++;
	}

	new->next = current->next;
	new->prev = current;
	current->next = new;

	return (new);
}
