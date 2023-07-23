/*
 * File: 3-print_all.c
 * Author: TobiLight
 */

#include "variadic_functions.h"
#include <string.h>

/**
 * print_all - prints anything
 * @format: List of types of arguments
 *
 * Return: nothing
 */

void print_all(const char *const format, ...)
{
	va_list args;
	char *temp_str, *separator;
	unsigned int i;

	va_start(args, format);

	i = 0;
	separator = "";
	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%s%c", separator, va_arg(args, int));
			break;
		case 's':
			temp_str = va_arg(args, char *);
			if (temp_str == NULL)
			{
				temp_str = "(nil)";
			}
			printf("%s%s", separator, temp_str);
			break;
		case 'f':
			printf("%s%f", separator, va_arg(args, double));
			break;
		case 'i':
			printf("%s%d", separator, va_arg(args, int));
			break;
		default:
			i++;
			continue;
		}
		separator = ", ";
		i++;
	}

	va_end(args);
	printf("\n");
}
