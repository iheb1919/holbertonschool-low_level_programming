#include "holberton.h"
/**
 * _strlen - function that return the string size
 * @s : input of the fuction
 * Return: 0  Always success
 */
int _strlen(char *s)
{
int i = 0;
while (*(s + i) != '\0')
{
i++;
}
return (i);
}
