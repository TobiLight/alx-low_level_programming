#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 *@n: number of times the character \ should be printed
 *
 * Return: void
*/

void print_diagonal(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (i == j)
			{
				_putchar('\');
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
