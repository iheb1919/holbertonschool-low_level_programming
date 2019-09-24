#include "holberton.h"
/**
  * jack_bauer - prints every minute of the day, starting from 00:00 to 23:59.
  *
  * Returns - Always 0
  */
void jack_bauer(void)
{
int h, m;
for (m = 0; m < 24; m++)
{
for (h = 0; h < 24; h++)
{
_putchar((h / 10) + '0');
_putchar((h % 10) + '0');
_putchar(':');
_putchar((m / 10) + '0');
_putchar((m % 10) + '0');
_putchar('\n');
}
}
return (0);
}
