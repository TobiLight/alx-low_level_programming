#include "main.h"

/**
 * main - prints _putchar, followed by a new line
 *
 * Description: prints _putchar, followed by a new line
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char word[] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		_putchar(word[i]);
	}
	_putchar('\n');

	return (0);
}
