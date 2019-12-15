#include "lists.h"
/**
 *
 *
 *
 */

int sum_dlistint(dlistint_t *head)
{
  int i = 0;
  if (!head)
    return (0);
  while (head)
    {
      i += head->n;
	head = head->next;
    }
  return (i);
}
