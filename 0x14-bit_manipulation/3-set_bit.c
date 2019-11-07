#include <stdio.h>
#include "holberton.h"
/**
 * set_bit - a function that sets the value of a bit to 1
 * @n: integer
 * @index: integer
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mm, m;
mm = 0;
m = 1;
if (index > 63)
return (-1);
mm = *n | (m << index);
*n = mm;
return (1);
}
