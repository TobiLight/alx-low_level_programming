#include "main.h"

/**
 * rot13 - encodes a string into rot13
 * @s: s is a character
 *
 * Return: Character
*/

char *rot13(char *s)
{
	char words[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char words_13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; words[j] != '\0'; j++)
		{
			if (s[i] == words[j])
			{
				s[i] = words_13[j];
				break;
			}
		}
	}

	return (s);
}
