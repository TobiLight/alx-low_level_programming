/*
 * File: 1-listint_len.c
 * Author: TobiLight
*/

#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: pointer to listint_t list elements
 *
 * Return: The number of elements in the list
*/

size_t listint_len(const listint_t *h)
{
	size_t elements_count = 0;

	/* Loop through the list */
	while (h != NULL)
	{
		h = h->next;
		elements_count++;
	}
	return (elements_count);
}
