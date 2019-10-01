#include "holberton.h"
/**
 * swap_int -  swap numbers
 * @a: variable enter to the function
 * @b: input of function
 * Return: no return
 */
void swap_int(int *a, int *b)
{
int x;
x = *a;
*a = *b;
*b = x;
}
