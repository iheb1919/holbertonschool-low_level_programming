#include "holberton.h"
/**
 * *_strncpy - function that copies a string
 * @dest: function input
 * @src: function input
 * @n: function input
 * Return: Always 0 (Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
while (*(src + i) != '\0' && i < n)
{
*(dest + i) = *(src + i);
i++;
}
while (i < n)
{
*(dest + i) = '\0';
i++;
}
return (dest);
}
