/*
 * File 0-sum_them_all.c
 * Author: TobiLight
*/

#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: Number of arguments
 *
 * Return: Integer (sum) else 0 if n is 0
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int sum, i;

	if (n == 0)
		return (0);

	va_start(args, n);

	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, unsigned int);
	}

	va_end(args);

	return (sum);
}
