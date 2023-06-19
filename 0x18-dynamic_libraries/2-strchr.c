#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string.
 * @s: s is character pointer
 * @c: is a character
 *
 * Return: Pointer or NULL
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
