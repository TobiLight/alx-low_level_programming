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

	/* Loop through n and copy src[i] to dest[i] 
	 * if src[i] doesnt have null byte */
	for (i = 0; i < n && src[i] != '\0')
	{
		/* Copy src[i] to dest */
		dest[i] = src[i];
	}

	/* Loop through n again so dest can have
	 * all it's remaining characters */
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (result);
}
