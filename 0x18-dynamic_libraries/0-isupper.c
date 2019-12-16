#include "holberton.h"
/**
 * _isupper - checks if character is a lowercase or uppercase
 *
 * @c: input character tested
 *
 * Return: 1 or 0
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
return (1);
else
return (0);
}
