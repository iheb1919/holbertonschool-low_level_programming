#include "holberton.h"
/**
 * rev_string - function that reverse a string
 *
 * @s: input if function
 */
void rev_string(char *s)
{
int j, i;
int l = 0;
char x;
while (*(s + l) != '\0')
{
l++;
}
for (i = 0 ,j = l - 1 ; i < j; i++, j--)
{
x = *(s + i);
*(s + i) = *(s + j);
*(s + j) = x;
}
}
