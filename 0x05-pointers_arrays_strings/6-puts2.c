#include "holberton.h"
/**
 * puts2 - functin that print string
 *@str: input of function
 * Return: no return
 */
void puts2(char *str)
{
int i, j;
i = 0;
while (*(str + i) != '\0')
{
i++;
}
for (j = 0; j < i; j++)
{
_putchar(*(str + j));
j++;
}
_putchar('\n');
}
