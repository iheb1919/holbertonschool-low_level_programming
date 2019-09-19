#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char n;
n = 'a';
while (n <= 'z')
{
if ((n != 'q') || (n != 'e'))
{
putchar(n);
putchar("\n");
}
n++;
}
}
