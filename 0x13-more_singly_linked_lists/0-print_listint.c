/*
 * File: 0-print_listint.c
 * Author: TobiLight
*/

#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: pointer to listint_t list
 *
 * Return: The number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t nodes_count = 0;

	/* loop through the head */
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes_count++;
	}
	return (nodes_count);
}
