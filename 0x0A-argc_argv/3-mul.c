#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multiplies two numbers.
 * @argc: integer number of command-line arguments
 * @argv: array containing command-line arguments
 * Return: 0 is  Success, 1 if error
 */
int main(int argc, char *argv[])
{
int a, b;
if (argc != 3)
{
puts("Error");
return (1);
}
a = atoi(argv[1]);
b = atoi(argv[2]);
printf("%d\n", a *b);
return (0);
}
