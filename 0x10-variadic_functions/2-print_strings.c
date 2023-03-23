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
	char *str;
	unsigned int i;

	if (n == 0)
	{
		printf("\n");
		return
	}
	/* Initialize va_list with number of arguments */
	va_start(args, n);

	/* Loop and access all arguments in va_list */
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str == NULL)
			str = "(nil)";

		if (i < n - 1)
		{
			if (separator == NULL)
				printf("%s", str);
			else
				printf("%s%s", str, separator);
		}
		else
			printf("%s\n", str);
	}
	va_end(args);
}
