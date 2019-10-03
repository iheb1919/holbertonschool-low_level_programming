#include "holberton.h"
/**
 * reverse_array - function that reverse array
 * @a: input function
 * @n input function
 * Return: Always success
 */
void reverse_array(int *a, int n)
{
int j, i;
int  x;
for (i = 0, j = n - 1 ; i < j; i++, j--)
{
x = *(a + i);
*(a + i) = *(a + j);
*(a + j) = x;
}
}
