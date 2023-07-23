/*
 * File: 1-print_binary.c
 * Author: TobiLight
 */

#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: number to be represented in binary
 *
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int m;
	int is_one = 0;

	m = 1ul << (sizeof(unsigned long int) * sizeof(unsigned long int) - 1);

	/* Loop through each bit*/
	while (m > 0)
	{
		/* If current bit is 1 */
		if (n & m)
		{
			is_one = 1;
			printf("1");
		}
		else if (is_one)
			printf("0");

		/* Move to the next bit */
		m >>= 1;
	}
	if (!is_one)
		printf("0");
}
