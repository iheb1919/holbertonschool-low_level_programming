#include "lists.h"

/**
 * print_listint - function that prints all the elements of a list
 * @h: pointer
 * Return: return number of nodes
 */

size_t print_listint(const listint_t *h)
{
size_t i = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		if (h->n)
		  printf("%d\n", h->n);

		else
		  printf("0\n");

		i++;
		h = h->next;
	}

	return (i);
}
