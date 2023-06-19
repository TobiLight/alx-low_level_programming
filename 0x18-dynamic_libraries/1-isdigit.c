#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9).
 * @c: integer or character to be checked
 *
 * Return: 1 if digit, 0 if not digit
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);

	return (0);
}
