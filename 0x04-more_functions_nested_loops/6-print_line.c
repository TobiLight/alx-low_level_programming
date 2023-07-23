#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of times character should be printed
 *
 * Return: void
*/

void print_line(int n)
{
	int line = 0;

	while (line < n)
	{
		_putchar('_');
		line++;
	}
	_putchar('\n');
}
