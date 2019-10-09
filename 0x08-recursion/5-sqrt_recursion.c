#include "holberton.h"
/**
 * _sqrt_recursion2 - returns the natural square root of a number.
 * @n: integer.
 * @sqr: integer, sqr at sqrt(n).
 * Return: integer sqrt of n or -1 if n is not a perfect square.
 */
int _sqrt_recursion2(int n, int sqr)
{
if (sqr * sqr == n)
return (sqr);
if (sqr * sqr > n)
return (-1);
return (_sqrt_recursion2(n, ++sqr));
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: integer.
 * Return: integer sqrt of n or -1 if n is not a perfect square.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (_sqrt_recursion2(n, 0));
}
