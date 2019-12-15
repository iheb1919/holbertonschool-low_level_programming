
#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of a list
 * @head: pointer to pointer
 * @n: integer input
 * Return: return the adress of the new element or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
  dlistint_t *new = NULL, *last = *head;

	new = malloc(sizeof(dlistint_t));
	if (new)
	{
		new->n = n;
		new->next = NULL;
		if (!*head)
			*head = new;
		else
		{
			while (last->next)
				last = last->next;
			last->next = new;
			new->prev = last;
		}
	}
return (new);

}
