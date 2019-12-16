#include "holberton.h"
/**
 *_memset - fills memory with a constant byte
 *@s: input function
 *@b: input funtion
 *@n: input function
 *
 *Return: Always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
