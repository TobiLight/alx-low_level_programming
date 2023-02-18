#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Description: prints all possible combinations of
 * single-digit numbers separated by commas
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);

		if (i != 57)
		{
			putchar(44);
			putchar(32);
		}
		i++;
	}
	putchar(10);

	return (0);
}
