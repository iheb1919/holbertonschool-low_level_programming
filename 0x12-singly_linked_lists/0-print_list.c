#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to const list_t linked list
 * Return: size_t number of nodes in h
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	while (h)
	{
		if (h->str == NULL)
		  printf("[%d] %s", 0, "(nil)");
		else
		  printf("[%d] %s", h->len, h->str);
		i++;
		h = h->next;
		printf("\n");
	}
	return (i);
}
