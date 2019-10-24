#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcodes for main
 * @argc: intput
 * @argv: input
 * Return: 0 success
 */
int main(int argc, char **argv)
{
int i, bytes;
char *byte_ptr;
if (argc != 2)
{
printf("Error\n");
return(1);
}
bytes = atoi(argv[1]);
if (bytes < 0)
{
printf("Error\n");
return(2);
}
byte_ptr = (char *)main;
for (i = 0; i < bytes; i++)
{
printf("%02hhx", byte_ptr[i]);
if (i < bytes - 1)
putchar(' ');
}
printf("\n");
return (0);
}
