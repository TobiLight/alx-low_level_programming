#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Description: prints every minute of the day
 *
 * Return: void
*/

void jack_bauer(void)
{
	int h10, h1, m10, m1, h_max;

	h_max = 58;
	h10 = '0';
	while (h10 < '3')
	{
		if (h10 < '2')
		{
			h_max = '4';
		}
		h1 = '0';
		while (h1 < h_max)
		{
			m10 = '0';
			while (m1 < 58)
			{
				_putchar(h10);
				_putchar(h1);
				_putchar(':');
				_putchar(m10);
				_putchar(m1);
				_putchar('\n');
				m1++;
			}
			m1 = '0';
			m10++;
		}
		m10 = '0';
		m1++;
	}
	h1 = '0';
	h10++;
}
