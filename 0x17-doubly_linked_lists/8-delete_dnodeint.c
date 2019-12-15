#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node
 * @head: pointer
 * @index: int
 * Return: return 1 or 0
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *del = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (del == NULL)
			return (-1);
		del = del->next;
	}

	if (del == *head)
	{
		*head = del->next;
		if (del != NULL)
			del->prev = NULL;
	}

	else
	{
		del->prev->next = del->next;
		if (del->next != NULL)
			del->next->prev = del->prev;
	}

	free(del);
	return (1);

}
