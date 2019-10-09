#include "holberton.h"
/**
 * factorial - returns factorial of n.
 * @n: integer.
 * Return: Always 0.
 */
int factorial(int n)
{
if (n < 0)
return (-1);
else if (n < 2)
return (1);
else
return (n * factorial(n - 1));
}
