#include "search_algos.h"


/**
  * interpolation_search - Search using interpolation algorithm.
  * @array: A pointer to the array.
  * @size: size of the array.
  * @value: value to search for.
  * Return: -1 or 1.
  */
int interpolation_search(int *array, size_t size, int value)
{
	size_t i, low = 0, high;

	if (array == NULL)
		return (-1);
	high = size - 1;
	while (high >= low)
	{
		i = low + (((double)(high - low) / (array[high] - array[low]))
			   * (value - array[low]));
		if (i < size)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", i);
			break;
		}

		if (array[i] == value)
			return (i);
		if (array[i] > value)
			high = i - 1;
		else
			low = i + 1;
	}

	return (-1);
}
