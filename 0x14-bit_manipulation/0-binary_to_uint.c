/*
 * File: 0-binary_to_uint.c
 * Author: TobiLight
*/

#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: Pointer to a string of 0 and 1 chars
 *
 * Return: The converted number, or 0 if
 *         there is one or more chars in the string b
 *         that is not 0 or 1, or b is NULL
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0, i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		result = result << 1;
		if (b[i] == '1')
			result = result | 1;
		i++;
	}
	return (result);
}
