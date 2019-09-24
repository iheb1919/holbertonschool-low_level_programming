#include "holberton.h"
/**
 * print_alphabet_x10 - prints lowercase alphabet 10 times, then newline
 *
 * Return: Null
 */
void print_alphabet_x10(void)
{
int i, j;
char a[] = "abcdefjhijklmnopqrstuvwxyz\n";
for (j = 0; j < 10; j++)
{
for (i = 0; i < 27 ; i++)
{
_putchar(a[i]);
}
}
}
