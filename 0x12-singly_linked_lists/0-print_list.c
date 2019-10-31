#include "lists.h"
/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to const list_t linked list
 * Return: size_t number of nodes in h
 */
size_t print_list(const list_t *h)
{
size_t i = 0;
while (h)
{
if (!h->str)
printf("[%u] %s\n", 0, "(nil)");
else
printf("[%u] %s\n", h->len, h->str);
h = h->next;
i++;
}
return (i);
}
