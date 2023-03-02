#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: dest is a strubg
 * @src: src is a string (appended word)
 *
 * Return: Pointer (dest)
*/

char *_strcat(char *dest, char *src)
{
	char *result = dest;

	/* Move dest pointer to the end*/
	while (*dest != '\0')
	{
		dest++;
	}

	/* Copy the src string to dest*/
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (result);
}
