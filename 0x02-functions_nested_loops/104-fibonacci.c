
#include <stdio.h>


/**
 * main - print the first 98 Fibonacci numbers, starting with 1 and 2. \n
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	long i, j, tmp;

	i = 1;
	j = 2;

	printf("%lu", i);

	for (n = 0; n < 97; n++)
	{
		printf(", %lu", j);
		tmp = i;
		i = j;
		j += tmp;
	}
	putchar('\n');

	return (0);
}
