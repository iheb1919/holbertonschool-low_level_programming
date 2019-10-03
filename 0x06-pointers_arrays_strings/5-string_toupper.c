#include "holberton.h"
/**
 * string_toupper - function that change lower to upper
 * @s: function input
 *
 * Return: always 0
 */
char *string_toupper(char *s)
{
int i;
while (*(s + i))
{
if (*(s + i) >= 'a' && *(s + i) <= 'z')
*(s + i) -= 32;
i++;
}
return (s);
}
