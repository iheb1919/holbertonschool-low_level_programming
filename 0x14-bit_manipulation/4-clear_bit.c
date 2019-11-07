#include <stdio.h>
#include "holberton.h"

/**
 * clear_bit - function that sets the value of a bit to 0
 * @n: integer
 * @index: integer
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int m, mm;
mm = 0;
m = 1;
if (index > 63)
return (-1);
mm = *n & ~(m << index);
*n = mm;
return (1);
}
