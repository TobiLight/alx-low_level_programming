#include "main.h"

/**
 * print_number - Prints an integer
 * @n: n is an integer
 *
 * Return: void
*/

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
		print_number(n / 10);

	_putchar(n % 10 + '0');

}
