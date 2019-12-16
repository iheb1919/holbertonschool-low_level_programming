#include "holberton.h"
/**
 * _strcmp - function that compares two strings
 * @s1: function input
 * @s2: function input
 * Return: Always 0
 */
int _strcmp(char *s1, char *s2)
{
int i, retur;
for (i = 0; *(s1 + i) != '\0'; i++)
{
if (*(s1 + i) - *(s2 + i) != 0)
{
retur = *(s1 + i) - *(s2 + i);
break;
}
}
if (retur == 0 && *(s1 + i) == '\0')
retur = *(s1 + i) - *(s2 + i);
return (retur);
}
