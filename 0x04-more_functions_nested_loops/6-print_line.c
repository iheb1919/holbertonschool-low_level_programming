#include "holberton.h"
/**
 * print_line - print line
 *
 * @n: input character tested
 *
 * Return: 1 or 0
 */
void print_line(int n)
{
int i;
if (n > 0)
{
for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
else
_putchar('\n');
}
