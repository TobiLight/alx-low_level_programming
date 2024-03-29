#include <unistd.h>

/**
 * _putchar - writes a character to the standard output (stdout)
 * @c: the character to write
 *
 * Return: On success 1, on error -1 and errno is set appropriately
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
