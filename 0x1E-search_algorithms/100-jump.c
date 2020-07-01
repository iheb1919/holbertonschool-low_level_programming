#include "search_algos.h"
#include <math.h>

/**
  * jump_search - Search using jump search algorithm.
  * @array: A pointer the array.
  * @size: The size of the array.
  * @value: The value to search for.
  * Return: -1 or 1.
  */
int jump_search(int *array, size_t size, int value)
{
	size_t i = 0, jump = 0, step = 0;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	while (jump < size && array[jump] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		jump += step;
	}

	i = jump - step;
	printf("Value found between indexes [%ld] and [%ld]\n", i, jump);

	if (jump >= size)
	jump = size - 1;

	for (; i <= jump; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
