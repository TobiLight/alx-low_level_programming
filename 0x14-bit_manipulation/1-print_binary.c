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

	/* If n is 0, print 0 and return */
	if (n == 0)
	{
		printf("0\n");
	}

	m = 1ul << (sizeof(unsigned long int) * 8 - 1);

	/* Loop through each bit*/
	while (m != 0)
	{
		/* If current bit is 1 */
		if ((n & m) != 0)
			printf("1");
		else
			printf("0");

		/* Move to the next bit */
		m >>= 1;
	}
	printf("\n");
}
