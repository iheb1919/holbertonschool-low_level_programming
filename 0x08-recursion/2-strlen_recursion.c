#include "holberton.h"
/**
 * _strlen_recursion - returns the length of a string.
 * @s: pointer to a char.
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
return (!*s ? 0 : 1 + _strlen_recursion(++s));
}
