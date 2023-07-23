#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: c is a character
 *
 * Return: Integer. 1 if successful. -1 if not.
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
