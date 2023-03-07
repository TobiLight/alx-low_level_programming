#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: s is a double pointer to a character
 * @to: to is a pointer to a character
 *
 * Return: void
*/

void set_string(char **s, char *to)
{
	*s = to;
}
