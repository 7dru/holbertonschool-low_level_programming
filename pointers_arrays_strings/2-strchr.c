#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string.
 * @s: Pointer to the string
 * @c: Character to locate
 *
 * Return: Pointer to the first occurrence of c, or NULL if not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}

	return (NULL);
}
