#include "holberton.h"
/**
 * more_numbers - prints 10 times fro; 0 to 14
 *
 * Return: 1 or 0
 */
void more_numbers(void)
{
int i, j;
int h, o;
for (j = 0; j <= 9; j++)
{
for (i = 0; i <= 14; i++)
{
h = i / 10;
o = i % 10;
if (i >= 10)
_putchar(h + '0');
if (i == 10)
o = 0;
_putchar(o + '0');
}
_putchar('\n');
}
}
