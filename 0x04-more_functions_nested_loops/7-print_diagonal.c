#include "holberton.h"
/**
 * print_diagonal - function that print a diagonal line
 *
 * @n: input character tested
 *
 * Return: 1 or 0
 */
void print_diagonal(int n)
{
int i, j;
if (n > 0)
{
for (i = 1; i <= n; i++)
{
_putchar('\\');
_putchar('\n');
for (j = 0; j < i; j++)
_putchar(' ');
}
}
else
_putchar('\n');
_putchar('\n');
}
