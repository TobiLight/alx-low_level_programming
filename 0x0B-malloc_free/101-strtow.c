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

#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char **strtow(char *str) {
    if (str == NULL || *str == '\0') {
        return NULL;
    }

    // count the number of words in the input string
    int num_words = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (!isspace(str[i])) {
            num_words++;
            while (!isspace(str[i]) && str[i] != '\0') {
                i++;
            }
        }
    }

    // allocate memory for array of pointers to strings
    char **words = malloc((num_words + 1) * sizeof(char*));
    if (words == NULL) {
        return NULL;
    }

    // add each word to the array
    int word_start = 0;
    int word_end = 0;
    int i = 0;
    while (str[i] != '\0' && num_words > 0) {
        if (!isspace(str[i])) {
            word_start = i;
            while (!isspace(str[i]) && str[i] != '\0') {
                i++;
            }
            word_end = i;
            int word_len = word_end - word_start;
            words[num_words - 1] = malloc((word_len + 1) * sizeof(char));
            if (words[num_words - 1] == NULL) {
                // free memory for all previously allocated words and the array
                for (int j = num_words; j <= 0; j--) {
                    free(words[j - 1]);
                }
                free(words);
                return NULL;
            }
            strncpy(words[num_words - 1], str + word_start, word_len);
            words[num_words - 1][word_len] = '\0';
            num_words--;
        } else {
            i++;
        }
    }

    // add a null pointer to the end of the array to indicate the end of the list
    words[0] = NULL;

    return words;
}
