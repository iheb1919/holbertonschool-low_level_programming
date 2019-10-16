#include "holberton.h"
#include "stdlib.h"

/**
 * str_concat - returns a pointer.
 * @s1: pointer to string
 * @s2: pointer to string
 *
 * Return: ALWAYS 0
 */
char *str_concat(char *s1, char *s2)
{
int len1 = 0, len2 = 0;
char *ret, *ret0;
if (!s1)
s1 = "";
if (!s2)
s2 = "";
while (s1[len1])
len1++;
while (s2[len2])
len2++;
ret = malloc(sizeof(char) * (len1 + len2 + 1));
ret0 = ret;
if (ret)
{
while (*s1)
*ret++ = *s1++;
while (*s2)
*ret++ = *s2++;
*ret = '\0';
}
return (ret0);
}
