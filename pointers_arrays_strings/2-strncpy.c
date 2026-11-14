#include "main.h"

/**
 * _strncpy - copies a string.
 * @dest: Pointer to the destination buffer
 * @src: Pointer to the source string
 * @n: Maximum number of bytes to copy
 *
 * Return: A pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
