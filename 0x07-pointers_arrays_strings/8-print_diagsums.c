#include <stdio.h>
/**
 * print_diagsums - prints the sum of the diagonals of an int array.
 * @a: pointer to arrayt.
 * @size: size of square array
 */
void print_diagsums(int *a, int size)
{
int d1, d2, i, j;
int arr[100][100];
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
arr[i][j] = *a;
a++;
}
}
for (d1 = 0, i = 0, j = 0; i < size; i++, j++)
d1 += arr[i][j];
for (d2 = 0, i = 0, j = size - 1; i < size; i++, j--)
d2 += arr[i][j];
printf("%d, %d\n", d1, d2);
}
