/*
 * File: 0-puts_recursion.c
 * Author: TobiLight
*/

#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: s is a character
 *
 * Return: void
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
