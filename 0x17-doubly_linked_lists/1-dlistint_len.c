#include "lists.h"
size_t dlistint_len(const dlistint_t *h)
{
  int i = 0;
  if (!h)
    return (0);
  while (h)
    {
	i++;
      h = h->next;
    }
  return (i);
}
