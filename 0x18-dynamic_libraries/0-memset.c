#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: s is a character and a pointer
 * @b: b is a character
 * @n: n is an unsigned integer
 *
 * Return: Pointer to the memory area S
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}

	return (s);
}
