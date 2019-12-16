#include "holberton.h"
/**
 * _strstr - locates the first occurrence in the string
 * @haystack: pointer to a string
 * @needle: pointer to substring
 * Return: pointer to the byte
 */
char *_strstr(char *haystack, char *needle)
{
int i, j, begin;
char *h = haystack, *n = needle;
for (i = 0; h[i]; i++)
{
j = 0;
if (h[i] == n[j])
{
begin = i;
for (; h[i] && n[j]; i++, j++)
if (h[i] != n[j])
break;
if (n[j] == '\0')
return (&h[begin]);
}
}
return (!*n ? &h[0] : (char *)0);
}
