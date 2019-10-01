#include "holberton.h"
/**
 * print_rev - function that prints string in reverse
 * @s: input of the function
 * Return: no return
 */
void print_rev(char *s)
{
int i = 0;
while (*(s + i) != '\0')
{
i++;
}
while (i > 0)
{
_putchar(*(s + i -1));
i--;
}
_putchar('\n');
}
