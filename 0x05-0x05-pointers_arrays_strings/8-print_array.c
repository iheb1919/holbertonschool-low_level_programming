#include "holberton.h"
#include <stdio.h>
/**
 * print_array - function that print n ele;ent of an array
 *
 * @a: is an array
 * @n: number of elements
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d",*(a + i));
if (i == n - 1)
break;
printf(", ");
}
printf("\n");
}
