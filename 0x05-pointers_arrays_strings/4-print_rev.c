#include "main.h"

/**
 * _print_rev - prints a string, in reverse
 * @s: s is a character
 *
 * Return: void
*/

void _print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)

	for (; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
