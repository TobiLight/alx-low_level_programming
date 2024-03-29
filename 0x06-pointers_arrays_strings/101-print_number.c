#include "main.h"

/**
 * print_number - Prints an integer
 * @n: n is an integer
 *
 * Return: void
*/

void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	num = n;

	if (num / 10)
	{
		print_number(num / 10);
	}

	_putchar(num % 10 + '0');

}
