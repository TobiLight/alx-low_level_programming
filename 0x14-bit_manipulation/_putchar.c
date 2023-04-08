/*
 * File: _putchar.c
 * Author: TobiLight
 */

#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints a single character to output
 * @c: character to print to output
 *
 * Return: Integer
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}