/*
 * File: 101-strtow.c
 * Author: TobiLight
*/

#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_WORD_LENGTH 100

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

	for (i = 0; i < str[i] != '\0'; i++)
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
	int num_words = 0, word_index = 0, word_length = 0;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);

	num_words = word_count(str);

	words = (char **) malloc((num_words + 1) * sizeof(char *));

	if (words == NULL)
		return (NULL);

	i = 0;

	for (i = 0; i < str[i] != '\0'; i++)
	{
		if (!isspace(str[i]))
		{
			if (word_length == 0)
			{
				words[word_index] = (char *) malloc(MAX_WORD_LENGTH * sizeof(char));
				if (words[word_index] == NULL)
				{
					free(words);
					return (NULL);
				}
			}
			words[word_index][word_length++] = str[i];
		}
		else if (word_length != 0)
		{
			words[word_index++][word_length] = '\0';
			word_length = 0;
		}
	}
	if (word_length != 0)
	{
		words[word_index++][word_length] = '\0';
	}
	words[word_index] = NULL;

	return (words);
}
