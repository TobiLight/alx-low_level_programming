/*
 * File: 3-set_bit.c
 * Author: TobiLight
 */

#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: Number to be represented in Binary
 * @index: Index of binary
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = *n | (1 << index);
	return (1);
}
