/*
 * File: 0-create_array.c
 * Author: TobiLight
*/

#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars then
 *                initializes it with a specific char
 * @size: size of array
 * @c: character
 *
 * Return: Pointer (char) if not NULL
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *arr = malloc(size * sizeof(c));

	if (size == 0)
		return (NULL);

	if (arr == NULL)
		return (NULL);

	while (size != 0)
	{
		arr[i] = c;
		i++;
		size--;
	}

	return (arr);
}
