/*
 * File: 2-str_concat.c
 * Author: TobiLight
*/

#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings.
 * @s1: string to be concatenated to
 * @s2: string to be concatenated with
 *
 * Return: Pointer (char) or NULL
*/

char *str_concat(char *s1, char *s2)
{
	char *new_str;
	size_t len1, len2;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	/* Get length of s1 and s2 */
	len1 = strlen(s1);
	len2 = strlen(s2);

	/* Allocate memory to new_str */
	new_str = malloc((len1 + len2 + 1) * sizeof(char));

	if (new_str == NULL)
		return (NULL);


	/* copy values of s1 and s2 to new_str */
	strcpy(new_str, s1);
	strcpy(new_str + len1, s2);

	return (new_str);
}
