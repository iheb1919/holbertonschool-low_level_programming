#include "holberton.h"
/**
 * puts_half - function that print the second half of string
 *
 *@str: input of the string
 */
void puts_half(char *str)
{
int i, l;
while (*(str + l))
l++;
if ((l % 2) != 0)
{
for (i = l / 2 + 1; i < l; i++)
_putchar(*(str + i));
}
else
{
for (i = l / 2; i < l; i++)
_putchar(*(str + i));
}
_putchar('\n');
}
