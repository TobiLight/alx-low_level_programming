#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>

/*
 * File: variadic_functions.h
 * Author: TobiLight
 * Description: This header file contains all the
 *              function prototypes for this project
*/

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

/**
 * struct op - Struct op
 *
 * @c: The data type (char)
 * @func: The function associated with it
*/
typedef struct fmt_t {
	char c;
	void (*func)(va_list);
} fmt;

void print_char(va_list);
void print_int(va_list);
void print_string(va_list);
void print_float(va_list);
void print_all(const char * const format, ...);

#endif
