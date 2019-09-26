#include "holberton.h"

/**
 * print_diagonal - Entry point
 *@n: number of times to print '\' in diagonal
 * Return: no return
 */
void print_diagonal(int n)
{
	int i;
	int j;
	for (i = 0; i < n; i++)
	{
		if (n > 1)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
		if (n <= 0)
		{
			_putchar('\n');
		}
}
