#include "lists.h"

/**
 * add_dnodeint - function that add a new node at the beginning of a list
 * @head: pointer to pointer
 * @n: input integer
 * Return:  return address of the new element or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;
if (head == NULL)
return (NULL);
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
else
{
new->n = n;
new->next = *head;
new->prev = NULL;
*head = new;
}
return (new);
}
