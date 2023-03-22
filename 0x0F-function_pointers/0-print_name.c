/*
 * File: 0-print_name.c
 * Author: TobiLight
 */

#include "function_pointers.h"

/**
 * print_name -Prints a name
 * @name: Pointer to name character to be printed
 * @f: Pointer to the print function
 */

void print_name(char *name, void (*f)(char *))
{
    f(name);
}