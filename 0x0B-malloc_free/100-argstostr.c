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
	char *str;
	int arg, byte, index, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			size++;
	}

	str = malloc(sizeof(char) * size + 1);

	if (str == NULL)
		return (NULL);

	index = 0;

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			str[index++] = av[arg][byte];

		str[index++] = '\n';
	}

	str[size] = '\0';

	return (str);
}
