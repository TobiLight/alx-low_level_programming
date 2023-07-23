/*
 * File: 5-flip_bits.c
 * Author: TobiLight
 */

#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 *             need to flip to get from one number to another.
 * @n: The number
 * @m: The number to flip n to
 *
 * Return: returns the number of bits you would
 *         need to flip to get from one number to another.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bit_count = 0, flip = n ^ m;

	for (; flip > 0;)
	{
		bit_count += (flip & 1);
		flip = flip >> 1;
	}

	return (bit_count);
}
