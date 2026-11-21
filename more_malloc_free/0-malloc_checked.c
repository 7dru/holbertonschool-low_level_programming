#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc and exits with 98 on failure
 * @b: Number of bytes to allocate
 *
 * Return: Pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
