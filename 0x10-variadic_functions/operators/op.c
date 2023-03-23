/*
 * File: op.c
 * Author: TobiLight
 */

#include "../variadic_functions.h"

/**
 * print_char - print char
 * @args: list of arguments
 */

void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int- print int
 * @args: list of arguments
 */

void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_string - print string
 * @args: list of arguments
 */

void print_string(va_list args)
{
	if (va_arg(args, char *) != NULL)
	{
		printf("%s", va_arg(args, char *));
	}
	printf("(nil)");
}

/**
 * print_float - print float
 * @args: list of arguments
 */

void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}
