/*
 * File: 101-strtow.c
 * Author: TobiLight
*/

#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


/**
 * word_count - return word count
 * @str: string to be counted
 *
 * Return: Integer
*/

int word_count(char *str);

int word_count(char *str)
{
	int i = 0, word_count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (!isspace(str[i]) && (i == 0 || isspace(str[i - 1])))
		{
			word_count++;
		}
	}
	return (word_count);
}

/**
 * strtow - splits a string into words
 * @str: string to be splitted
 *
 * Return: Pointer (str[])
*/

char **strtow(char *str)
{
	char **strings;
	int index = 0, words, w, letters, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = word_count(str);
	if (words == 0)
		return (NULL);

	strings = malloc(sizeof(char *) * (words + 1));
	if (strings == NULL)
		return (NULL);

	for (w = 0; w < words; w++)
	{
		while (str[index] == ' ')
			index++;

		letters = word_len(str + index);

		strings[w] = malloc(sizeof(char) * (letters + 1));

		if (strings[w] == NULL)
		{
			for (; w >= 0; w--)
				free(strings[w]);

			free(strings);
			return (NULL);
		}

		for (l = 0; l < letters; l++)
			strings[w][l] = str[index++];

		strings[w][l] = '\0';
	}
	strings[w] = NULL;

	return (strings);
}
