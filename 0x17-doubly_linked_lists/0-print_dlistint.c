#include "lists.h"
size_t print_dlistint(const dlistint_t *h)
{
  int i = 0;
  if (!h)
    return (0);
  while (h)
    {
      printf("%d\n",h->n);
	i++;
      h = h->next;
    }
  return (i);
}
