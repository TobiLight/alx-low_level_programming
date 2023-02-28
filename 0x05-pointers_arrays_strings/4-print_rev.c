#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: s is a character
 *
 * Return: void
*/

void print_rev(char *s)
{
	int i;

	/* find the length of character using i */
	for (i = 0; s[i] != '\0'; i++)
	{
	}

	/* prints char from the last index as i is decremented */
	for (i -= 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
