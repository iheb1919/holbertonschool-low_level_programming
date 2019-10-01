#include "holberton.h"
/**
 * print_rev - function that prints string in reverse
 * @s: input of the function
 * Return: no return
 */
void print_rev(char *s)
{
int j;
int i = 0;
while (*(s + i) != '\0')
{
i++;
}
for (j = i; j > 0; j--)
{
_putchar(*(s + j -1));
}
_putchar('\n');
}
