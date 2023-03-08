/**
 * File: 3-factorial.c
 * Author: TobiLight
*/

#include "main.h"

/**
 * factorial - Returns the factorial of a given number
 * @n: n is an integer and the given number
 *
 * Return: Integer
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	if (n == 1)
	{
		return (1);
	}

	return n * factorial(n - 1);
}
