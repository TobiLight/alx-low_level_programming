#include <stdio.h>
#include"main.h"

/**
 * print_to_98 - prints numbers to 98
 * @n: n is an integer
 *
 * Description: prints all natural numbers from n to 98
 *
 * Return: void
*/

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("98\n");
}
