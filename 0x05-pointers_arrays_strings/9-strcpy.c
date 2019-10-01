#include "holberton.h"
/**
 * *_strcpy - function that make a copies
 *
 * @dest: input of function
 * @src: input of function
 * Return: dest Always Success
 */
char *_strcpy(char *dest, char *src)
{
int i;
int j;
i = 0;
while (*(src + i) != '\0')
{
i++;
}
i++;
j = 0;
while (j < i)
{
dest[j] = src[j];
j++;
}
return (&*dest);
}
