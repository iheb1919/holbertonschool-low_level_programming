#include "lists.h"

/**
 * add_dnodeint - function that add a new node at the beginning of a list
 * @head: pointer to pointer
 * @n: input integer
 * Return:  return address of the new element or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new = NULL;

new = malloc(sizeof(*new));
if (!new)
return (NULL);
new->n = n;
new->prev = NULL;
new->next = *head;
if (*head)
(*head)->prev = new;
*head = new;
return (new);
}
