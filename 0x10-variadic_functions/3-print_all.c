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

void print_all(const char * const format, ...)
{
	void *result;
    va_list args;
    char *fmt;

	int format_len = strlen(format), i, j;
    va_start(args, NULL);
	//  loop through the arguments
    

	//  do an inner loop through formats
	// compare if argument entered is same as format
	// if yes, print result followed by a comma
	// if argument is an empty char, print (nil)
}