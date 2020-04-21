#include "search_algos.h"
/**
 * linear_search - unction that searches for a value in an array of integers
 * @array: pointer of table
 * @size: size of the taable
 * @value: value to search for
 * Return: the index of the value or -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
