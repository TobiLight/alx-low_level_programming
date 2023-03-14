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
	int i, j, k, num_words = 0, word_start = 0;
	char **words;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}

	words = malloc(strlen(str) * sizeof(char*));
	if (words == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (isspace(str[i]) && i > word_start)
		{
			words[num_words] = malloc((i - word_start + 1) * sizeof(char));
			if (words[num_words] == NULL)
			{
				for (j = 0; j < num_words; j++)
				{
					free(words[j]);
				}
				free(words);
				return (NULL);
			}

			strncpy(words[num_words], str + word_start, i - word_start);
			words[num_words][i - word_start] = '\0';
			num_words++;
			word_start = i + 1;
		}
	}

	if (word_start < (int)strlen(str))
	{
		words[num_words] = malloc((strlen(str) - word_start + 1) * sizeof(char));
		if (words[num_words] == NULL)
		{
			for (k = 0; k < num_words; k++)
			{
				free(words[k]);
			}
			free(words);
			return (NULL);
		}
		strncpy(words[num_words], str + word_start, strlen(str) - word_start);
		words[num_words][strlen(str) - word_start] = '\0';
		num_words++;
	}
	words[num_words] = NULL;
	return (words);
}
