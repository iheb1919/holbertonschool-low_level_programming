#include "holberton.h"
/**
 * _puts - function that print a string
 * @str: input of the function
 * Return: no return
 */
void _puts(char *str)
{
int i = 0;
while (*(str + i) != '\0')
{
_putchar(*(str + i));
i++;
}
_putchar('\n');
}
