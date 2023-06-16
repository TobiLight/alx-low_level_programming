/*
 * File: 0-print_dlistint.c
 * Author: Oluwatobiloba Light
 */

#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @h: Constant pointer to a dlistint_t head
 *
 * Return: The number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t len;

	while (h)
	{
		len++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (len);
}