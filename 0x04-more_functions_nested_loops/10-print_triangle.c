#include "holberton.h"
/**
 * print_triangle - prints a triangle
 *
 * @size: input integer tested
 *
 * Return: 1 or 0 or -1
 */
void print_triangle(int size)
{
int i;
int n;
for (i = 1; i <= size; i++)
{
for (n = 0; n < size; n++)
{
if ((n + i) < size)
_putchar(' ');
if ((n + i) >= size)
_putchar('#');
}
_putchar('\n');
}
if (size <= 0)
{
_putchar('\n');
}
}
