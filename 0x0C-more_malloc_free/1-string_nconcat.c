/*
 * File: 1-string_nconcat.c
 * Author: TobiLight
*/

#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string to concat with
 * @s2: string to concat to s1
 * @n: number of bytes to concat
 *
 * Return: Pointer to new allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2;
	char *new_str, *p;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	/* Get the length of s1 */
	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
		n = len2;

	new_str = malloc(len1 + n + 1);

	if (new_str == NULL)
		return (NULL);

	p = new_str;
	while (*s1 != '\0')
	{
		*p++ = *s1++;
	}

	while (n-- > 0)
	{
		*p++ = *s2++;
	}

	*p = '\0';
	return (new_str);
}
