/*
 * File: split.c
 * Author: TobiLight
 */

#include "shell.h"

/**
 * strtok - parses a string into a sequence of tokens
 * @str: Pointer to the string to be parsed
 * @delimiter: Pointer to bytes that delimits tokens in the parsed string
 *
 * Return: Pointer to the next token or NULL if no tokens
 */

char *_strtok(char *str, const char *delim)
{
	static char *last_str = NULL;
	static const char *last_delim = NULL;
	char *start, *end;
	const char *d;
	int found = 0;

	if (str != NULL)
		last_str = str;
	else
		str = last_str;

	if (delim != NULL)
		last_delim = delim;
	else
		delim = last_delim;

	start = str;
	while (*start != '\0')
	{
		found = 0;
		for (d = delim; *d != '\0'; d++)
		{
			if (*start == *d)
			{
				start++;
				found = 1;
				break;
			}
		}

		if (!found)
		{
			end = start;
			while (*end != '\0')
			{
				found = 0;
				for (d = delim; *d != '\0'; d++)
				{
					if (*end == *d)
					{
						found = 1;
						break;
					}
				}

				if (found)
				{
					*end = '\0';
					last_str = end + 1;
					return start;
				}

				end++;
			}

			last_str = end;
			return start;
		}
	}

	return NULL;
}
