#include "holberton.h"
/**
 * *_srtncat - function that concatinates two strings
 * @*dest: function input
 * @*src: function input
 * @*n: function input
 * Return: A pointer to result
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0, l = 0;
while (dest[i++])
l++;
for (i = 0; src[i] && i < n; i++)
dest[l++] = src[i];
return (dest);
}
