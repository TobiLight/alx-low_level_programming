/*
 * File: 3-print_all.c
 * Author: TobiLight
 */

#include "variadic_functions.h"
#include <string.h>
#include "operators/op.c"

/**
 * print_all - prints anything
 * @format: List of types of arguments
 *
 * Return: nothing
 */

void print_all(const char *const format, ...)
{
	va_list args;
	int i, j;
	char *separator = ", ";
	char *temp = "";

	fmt op[] = {
		{'c', print_char},
		{'i', print_int},
		{'s', print_string},
		{'f', print_float},
		{'\0', NULL}
	};

	va_start(args, format);

	i = 0;

	while (format[i] != '\0' && format != NULL)
	{
		j = 0;
		while (op[j].c != '\0')
		{
			if (op[j].c == format[i])
			{
				printf("%s", temp);
				op[j].func(args);
				temp = separator;
			}
			j++;
		}
		i++;
	}

	va_end(args);
	printf("\n");
}
