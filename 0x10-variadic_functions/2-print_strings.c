/*
 * File: 2-print_strings.c
 * Author: TobiLight
*/

#include "variadic_functions.h"

/**
 * print_strings - Prints strings
 * @separator: String to be printed between strings
 * @n: Number of strings passed
 *
 * Return: nothing
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	/* Store arguments in va_list */
	va_list args;
	unsigned int i;

	/* Initialize va_list with number of arguments */
	va_start(args, n);

	/* Loop and access all arguments in va_list*/
	for (i = 0; i < n; i++)
	{
		/* If no separator, don't print anything*/
		if (separator == NULL)
		{
			break;
		}
		printf("%s", va_arg(args, char *));
		/* Remove separator at the end of last digit*/
		if (i < (n - 1))
			printf("%s", separator);
	}

	va_end(args);
	printf("\n");
}
