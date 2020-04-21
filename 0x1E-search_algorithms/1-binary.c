#include "search_algos.h"

/**
 * binary_search -  function that searches for a value in a sorted array
 * @array: pointer of table
 * @size: size of the taable
 * @value: value to search for
 * Return: the index of the value or -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t mid, start = 0, end = size - 1, j = 0;

	if (array == NULL)
		return (-1);
	while (start <= end)
	{
		printf("Searching in array: ");
		for (j = start; j <= end; j++)
		{
			if (j < end)
				printf("%d, ", array[j]);
			else
				printf("%d\n", array[j]);
		}
		mid = (end + start) / 2;
		if (value == array[mid])
			return (mid);
		else if (value < array[mid])
			end = mid - 1;
		else if (value > array[mid])
			start = mid + 1;
	}
	return (-1);
}
