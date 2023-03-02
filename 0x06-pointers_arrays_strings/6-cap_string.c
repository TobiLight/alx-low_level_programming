#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @s: s is a character
 *
 * Return: Character
*/

char *cap_string(char *s)
{
	int i, j;
	char separators[] = " \t\n,;.!?\"{}()";

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (i == 0)
			{
				s[i] -= 32;
			}
			else
			{
				for (j = 0; separators[j] != '\0'; j++)
				{
					if (separators[j] == s[i - 1])
						s[i] -= 32;
				}
			}
		}
	}
	return (s);
}
