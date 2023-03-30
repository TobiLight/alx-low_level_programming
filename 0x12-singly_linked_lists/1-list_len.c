/*
 * File: 1-list_len.c
 * Author: TobiLight
*/

#include "lists.h"

/**
 * list_len - Returns number of elements in a list_t list
 * @h: list_t list
 *
 * Return: Number of elements
*/

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
