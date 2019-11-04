#include "lists.h"  /* listint_t */

/**
  * delete_nodeint_at_index - deletes the node at a given position.
  * @head: pointer
  * @index: integer index of node that should be deleted
  * Return: 1 if it succeeded, -1 if it failed
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *node = *head, *del = NULL;
unsigned int i = 0;
if (*head && index == 0)
{
*head = node->next;
free(node);
return (1);
}
else if (*head)
{
while (node && (++i != index))
node = node->next;
if (node)
{
del = node->next;
node->next = (node->next)->next;
free(del);
return (1);
}
}
return (-1);
}
