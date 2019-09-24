#include "holberton.h"
/**
 * print_alphabet - prints lowercase alphabet, then newline
 *
 * Return: Null
 */
void print_alphabet(void)
{
int i;
char a[] = "abcdefjhijklmnopqrstuvwxyz\n";
for (i = 0; i < 27 ; i++)
{
_putchar(a[i]);
}
}
