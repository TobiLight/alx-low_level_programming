#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Description: prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i = 0;

	while (i < 48)
	{
		if (i < 10)
		{
			putchar(i + 48);
		} else
		{
			putchar(i + 87);
		}

		putchar(32);
	}
	putchar(10);
	return (0);
}
