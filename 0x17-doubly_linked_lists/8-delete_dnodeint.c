#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node
 * @head: pointer
 * @index: int
 * Return: return 1 or 0
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *new = *head;
unsigned int i = 0;
while (new != NULL)
{
if (index == 0)
*head = new->next;
if (i == index)
{
if (new->next != NULL)
new->next->prev = new->prev;
if (i != 0)
new->prev->next = new->next;
free(new);
return (1);
}
i++;
new = new->next;
}
return (-1);
}
