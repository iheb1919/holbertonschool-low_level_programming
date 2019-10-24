#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: inpot function
 * @argv: input function
 * Return: success
 */
int main(int argc, char **argv)
{
int i, b;
char *byte;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
b = atoi(argv[1]);
if (b < 0)
{
printf("Error\n");
exit(2);
}
byte = (char *)main;
for (i = 0; i < b; i++)
{
printf("%02hhx ", byte[i]);
if (i < b - 1)
printf(" ");
}
printf("\n");
return (0);
}
