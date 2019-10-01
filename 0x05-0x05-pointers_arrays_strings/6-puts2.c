#include "holberton.h"
/**
 * puts2 - functin that print string
 *
 *@str: input of function
 */
void puts2(char *str)
{
int i, j;
while (*(str + i))
{
i++;
}
for (j = 0; j <= i; j++)
{
_putchar(*(str + j));
j++;
}
_putchar('\n');
}
