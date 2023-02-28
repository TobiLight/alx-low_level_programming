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
		;
	}

	/* prints char from the last index as i is decremented */
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}

	_putchar('\n');
}
