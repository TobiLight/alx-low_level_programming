#include "main.h"

/**
 * _strncpy -  copies a string
 * @dest: dest is a character
 * @src: src is a character
 * @n: n is an integer
 *
 * Return: Pointer
*/

char *_strncpy(char *dest, char *src, int n)
{
	char *result = dest;
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (result);
}
