#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - 
 * @h: first element of the list
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	int i;

	i = 0;
	if(h == NULL)
	  return (0);
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			i++;
		} else
		{
		i++;
		h = h->next;
	
		}
	}
	printf("\n");
	return (i);

}
