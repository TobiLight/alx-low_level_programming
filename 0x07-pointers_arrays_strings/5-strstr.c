#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: haystack is a character
 * @needle: needle is a character
 *
 * Return: Pointer or NULL
*/

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*h && *n && *h == *n)
		{
			h++;
			n++;
		}

		if (!*n)
		{
			return (haystack);
		}
		haystack++;
	}

	return (NULL);
}
