#include <stdio.h>
/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	unsigned long a = 1, b = 2, c;
	int count = 2;

	printf("%lu, %lu, ", a, b);

	while (count < 98)
	{
		c = a + b;
		printf("%lu, ", c);
		a = b;
		b = c;
		count++
	}
	printf("\n");
	return (0);
}
