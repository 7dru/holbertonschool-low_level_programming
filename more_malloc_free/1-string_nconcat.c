#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates s1 and at most the first n bytes of s2
 * @s1: First string
 * @s2: Second string
 * @n: Maximum number of bytes to copy from s2
 *
 * Return: Pointer to newly allocated concatenated string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *res;
	unsigned int len1 = 0, len2 = 0, copy_len, i, j;

	if (s1 != NULL)
	{
		while (s1[len1] != '\0')
			len1++;
	}

	if (s2 != NULL)
	{
		while (s2[len2] != '\0')
			len2++;
	}

	copy_len = (n >= len2) ? len2 : n;

	res = malloc(sizeof(char) * (len1 + copy_len + 1));
	if (res == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		res[i] = s1[i];
	}

	for (j = 0; j < copy_len; j++)
	{
		res[i + j] = s2[j];
	}

	res[len1 + copy_len] = '\0';

	return (res);
}
