/*
 * File: 0-print_list.c
 * Author: TobiLight
 */

#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list
 * @h: list structure pointer
 *
 * Return:  Number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}

	return (count);
}
