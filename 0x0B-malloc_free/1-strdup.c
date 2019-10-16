#include "holberton.h"
#include "stdlib.h"

/**
 * _strdup - returns a pointer to a newly allocated space
 *	     in memory
 * @str: pointer to string
 * Return: ALWAYS 0
 */
char *_strdup(char *str)
{
unsigned int size;
char *p, *s;
if (!str)
return (NULL);
p = str;
while (*p++)
size++;
s = (char *)malloc(size + 1);
if (s)
{
p = s;
while (*str)
*p++ = *str++;
*p = '\0';
}
return (s);
}
