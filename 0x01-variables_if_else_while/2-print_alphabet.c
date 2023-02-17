#include <stdio.h>

/**
 * main - Print the letters of the alphabet
 *
 * Description: Prints the letters of the alphabet
 * in lowercase
 *
 * Result: Always 0 (Success)
*/

int main(void)
{
	char *p = "abcdefghijklmnopqrstuvwxyz";
	
	while (*p)
	{
		putchar(*p++);
	}

	putchar(*p);
	return (0);
}
