#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * get_op_func - function that selects the correct function to perform the operation asked by the user
 * @s: input functio
 * Return: Success
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i;
i = 0;
while (ops[i].op)
{
if (!strcmp(ops[i].op, s))
return (ops[i].f);
i++;
}
return (0);
}