#include "holberton.h"
/**
 * _strlen - function that return the string size
 * @s : input of the fuction
 * Return: Always success
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
