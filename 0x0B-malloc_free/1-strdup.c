/*
 * File: 1-strdup.c
 * Author: TobiLight
*/

#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup -  returns a pointer to a newly allocated
 *            space in memory
 * @str: string to be duplicated
 *
 * Return: Pointer (char) or NULL
*/

char *_strdup(char *str)
{
	size_t str_len;
	char *new_str;

	/* Return NULL if str = NULL */
	if (str == NULL)
		return (NULL);

	/* Get length of str */
	str_len = strlen(str);

	/* Allocate memory for new_str */
	new_str = malloc(str_len + 1);

	/* copy str int new_str */
	strcpy(new_str, str);

	return (new_str);
}
