#include "lists.h"

/**
 * free_dlistint - function that frees a list
 * @head: pointer
 *
 */

void free_dlistint(dlistint_t *head)
{
dlistint_t *node = NULL;
if (head == NULL)
return;
while (head)
{
node = head->next;
free(head);
head = node;
}
}
