#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: s is a character
 *
 * Return: Character
*/

char *leet(char *s)
{
	char word[] = "aAeEoOtTlL";
	char word_in_num[] = "4433007711";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == word[j])
			{
				s[i] = word_in_num[j];
			}
		}
	}

	return (s);
}
