#include <stdlib.h>

/**
 * malloc_checked -  function that allocates memory using malloc.
 * @b: size of memory to allocate.
 * Return: 98 on fail.
 */
void *malloc_checked(unsigned int b)
{
	void *ret;

	ret = malloc(b);
	if (!ret)
		exit(98);
	return (ret);
}
