#include "holberton.h"
/**
 * string_toupper - function that change lower to upper
 * @str: function input
 *
 * Return: always 0
 */
char *string_toupper(char *str)
{
int index = 0;
while (str[index])
{
if (str[index] >= 'a' && str[index] <= 'z')
str[index] -= 32;
index++;
}
return (str);
}
