#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: void
*/

void more_numbers(void)
{
	char a, b;
	int i;

	for (i = 0; i < 10 i++)
	{
		for (a = 0; a <= 14; a++)
		{
			b = a;
			if (a > 9)
			{
				_putchar('1');
				b = a % 10;
			}
			_putchar(0'' + a);
		}
		_putchar('\n');
	}
}
