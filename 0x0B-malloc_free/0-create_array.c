#include "holberton.h"
#include "stdlib.h"

/**
 * create_array - creates an array of chars.
 * @size: input function
 * @c: input function.
 * Return: Always 0.
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *tab;
if (size < 1)
return (NULL);
a = malloc(size);
if (a)
for (i = 0; i < size; i++)
tab[i] = c;
return (tab);
}
