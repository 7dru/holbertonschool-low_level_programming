#include "dog.h"
#include <stdlib.h>

/**
 * _str_len - computes the length of a string
 * @s: Input string
 *
 * Return: Length of string
 */
static unsigned int _str_len(char *s)
{
	unsigned int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * _str_dup - duplicates a string into newly allocated memory
 * @s: Input string
 *
 * Return: Pointer to duplicated string, or NULL on failure
 */
static char *_str_dup(char *s)
{
	char *copy;
	unsigned int len, i;

	len = _str_len(s);
	copy = malloc(sizeof(char) * (len + 1));
	if (copy == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= len; i++)
	{
		copy[i] = s[i];
	}

	return (copy);
}

/**
 * new_dog - creates a new dog with copies of name and owner
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner name
 *
 * Return: Pointer to newly allocated dog_t, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		return (NULL);
	}

	d->name = _str_dup(name);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->owner = _str_dup(owner);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	d->age = age;
	return (d);
}
