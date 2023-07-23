/*
 * File: 1-print_numbers.c
 * Author: TobiLight
*/

#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers
 * @separator: String to be printed between numbers
 * @n: Number of integers passed
 *
 * Return: nothing
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	/* Store arguments in va_list */
	va_list args;
	unsigned int i;

	/* Initialize va_list with number of arguments */
	va_start(args, n);

	/* Loop and access all arguments in va_list*/
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, unsigned int));
		/* Remove separator at the end of last digit*/
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	va_end(args);
	printf("\n");
}
