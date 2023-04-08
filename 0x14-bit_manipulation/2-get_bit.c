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
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	/* will always return 1 at given index if true else 0 */
	if ((n & (1 << index)) != 0)
		return (1);

	return (0);
}
