#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;
c = 'a';
for (c = '0'; c <= '9'; c++)
{
putchar(c);
if (c != '9')
{
putchar(',');
putchar(' ');
}
}
}
