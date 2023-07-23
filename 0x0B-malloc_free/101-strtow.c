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
	char **words;
	int num_words = 0, i = 0, j = 0, k = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	while (str[i] != '\0')
	{
		if (!isspace(str[i]))
		{
			num_words++;
			while (!isspace(str[i]) && str[i] != '\0')
				i++;
		}
		else
			i++;
	}

	if (num_words == 0)
		return (NULL);

	words = malloc((num_words + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	for (i = 0; i < num_words; i++)
	{
		while (isspace(str[j]))
			j++;
		k = j;
		while (!isspace(str[j]) && str[j] != '\0')
			j++;
		words[i] = malloc((j - k + 1) * sizeof(char));
		if (words[i] == NULL)
		{
			while (i-- > 0)
				free(words[i]);
			free(words);
			return (NULL);
		}
		strncpy(words[i], str + k, j - k);
		words[i][j - k] = '\0';
	}
	words[i] = NULL;

	return (words);
}
