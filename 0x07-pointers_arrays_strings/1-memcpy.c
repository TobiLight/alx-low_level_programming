#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: dest is a character
 * @src: src is a character
 * @n: n is an unsigned integer
 *
 * Return: Pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *original_dest = dest;

	while (n != 0)
	{
		*dest++ = *src++;
		n--;
	}

	return (original_dest);
}
