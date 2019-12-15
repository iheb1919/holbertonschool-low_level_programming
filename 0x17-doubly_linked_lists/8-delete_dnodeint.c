#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node
 * @head: pointer
 * @index: int
 * Return: return 1 or 0
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *ptr = NULL;
if (head)
{
ptr = *head;
while (ptr && index--)
ptr = ptr->next;
if (!index && ptr)
{
if (ptr->prev)
ptr->prev->next = ptr->next;
else
*head = ptr->next;
if (ptr->next)
ptr->next->prev = ptr->prev;
free(ptr);
return (1);
}
}
return (-1);
}
