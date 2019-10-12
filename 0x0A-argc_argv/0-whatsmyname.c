#include <stdio.h>
/**
 * main - prints its executable name
 * @argc: integer number of command-line arguments
 * @argv: array containing command-line arguments
 * Return: Always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
printf("%s\n", argv[0]);
return (0);
}
