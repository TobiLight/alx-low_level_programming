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
	int i, j, k, n = strlen(str);
	char **words = malloc((n/2) * sizeof(char*));

	for (i = 0, j = 0; i < n; i = k + 1)
	{
		while (i < n && str[i] == ' ')
		{
			i++;
		}

		if (i == n)
			break;

		k = i;

		while (k < n && str[k] != ' ')
		{
			k++;
		}
		char *word = malloc((k-i+1) * sizeof(char));

		if (word == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(words[j]);
			}
			free(words);
			return (NULL);
		}
		strncpy(word, str+i, k-i);
		word[k-i] = '\0';
		words[j++] = word;
	}
	words = realloc(words, (j+1) * sizeof(char*));
	words[j] = NULL;
	return (words);
}
