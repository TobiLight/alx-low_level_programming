/**
 * File: 2-get_bit.c
 * Author: TobiLight
 */

#include "main.h"

/**
 * get_bit -returns the value of a bit at a given index.
 * @n: Number to be represented in binary
 * @index: index of the bit
 *
 * Return: The value of the bit at index index
 *         or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;
	char c[30];
	itoa(n, c, 2);
	while (c[i] != '\0')
	{
		if (i == index)
		{
			return (c[i] - '0');
		}
		i++;
	}
	return (0);
}
