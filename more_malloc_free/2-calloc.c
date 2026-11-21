#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc and sets it to zero
 * @nmemb: Number of elements in the array
 * @size: Size of each element in bytes
 *
 * Return: Pointer to the allocated zeroed memory, or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int total, i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	total = nmemb * size;
	ptr = malloc(total);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < total; i++)
	{
		ptr[i] = 0;
	}

	return ((void *)ptr);
}
