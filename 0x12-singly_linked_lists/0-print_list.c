
#include "lists.h"

/**
 * print_list - prints all elements of a list_t list
 * @h: list_t list
 *
 * Return: number of nodes in h
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%u] %s\n", h->len, h->str);

		i++;
		h = h->next;
	}

	return (i);
}
