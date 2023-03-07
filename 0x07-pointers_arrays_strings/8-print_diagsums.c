#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -  prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: a is a pointer to an integer
 * @size: size is an integer
 *
 * Return: void
*/

void print_diagsums(int *a, int size)
{
	int i = 0;
	int diag1 = 0, diag2 = 0;

	while (i < size)
	{
		diag1 += *(a + i * size + i);
		diag2 += *(a + i * size + (size - i - 1));
		i++;
	}

	printf("%d %d\n", diag1, diag2);
}
