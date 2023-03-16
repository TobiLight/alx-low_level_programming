/*
 * File: 2-calloc.c
 * Author: TobiLight
*/

#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: Number of elements
 * @size: Byte size of each array element
 *
 * Return: If nmemb = 0, size = 0, or the function fails - NULL.
 *         Otherwise - a pointer to the allocated memory.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total_elem, i;
	char *char_ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_elem = nmemb * size;
	ptr = malloc(total_elem);

	if (ptr == NULL)
		return (NULL);

	/* Initialize memory to 0 */
	char_ptr = ptr;
	for (i = 0; i < total_elem; i++)
	{
		*(char_ptr + i) = 0;
	}

	return (ptr);
}
