/*
 * File: 100-argstostr.c
 * Author: TobiLight
*/

#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates arguments of a program
 * @ac: argument count
 * @av: pointer to a pointer of array
 *
 * Return: Char or NULL
*/

char *argstostr(int ac, char **av)
{
	char *new_str;
	int i, j, length = 0, index = 0;

	/* return null if ac is o or av is null */
	if (ac == 0 || av == NULL)
		return (NULL);

	/* get the length of all args and add 1 for newline char */
	for (i = 0; i < ac; i++)
	{
		length += strlen(av[i]) + 1;
	}

	/* allocate memory to new_str */
	new_str = (char *)malloc(length * sizeof(char ));

	/* check if new_str is not null */
	if (new_str == NULL)
		return (NULL);

	/* copy the string and add a new line */
	for (j = 0; j < ac; j++)
	{
		strcpy(new_str + index, av[j]);
		index += strlen(av[j]);
		new_str[index++] = '\n';
	}

	/* replace the last new line with null char */
	new_str[length] = '\0';
	return (new_str);
}
