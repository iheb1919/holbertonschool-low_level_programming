#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: intege
 * @argv: array 
 *
 * Return: Success.
 */
int main(int argc, char **argv)
{
int a, b;
char op;
if (argc != 4)
{
return (NULL);
}
op = argv[2][0];
a = atoi(argv[1]);
b = atoi(argv[3]);
if (b == 0 && (op == '/' || op == '%'))
{
printf("Error");
return (0);
}
printf("%d\n", get_op_func(argv[2])(a, b));
return (0);
}
