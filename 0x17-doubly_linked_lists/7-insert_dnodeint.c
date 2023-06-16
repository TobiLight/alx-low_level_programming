/*
 * File: 7-insert_dnodeint.c
 * Author: Oluwatobiloba Light
 */

#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node in a dlistint_t
 *                            list at a given position.
 * @h: A pointer to the head of the dlistint_t list.
 * @idx: The position to insert the new node.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *curr = *h, *new_node;
	size_t len;
	unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));
	for (len = 0; curr != NULL; len++)
	{
		curr = curr->next;
	}

	if (idx == len - 1)
		return (add_dnodeint_end(h, n));
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (*h == NULL)
	{
		new_node->prev = NULL;
		new_node->next = NULL;
		*h = new_node;
		return (new_node);
	}
	curr = *h;
	while (curr)
	{
		if (i == idx)
		{
			new_node->next = curr;
			new_node->prev = curr->prev;
			curr->prev->next = new_node;
			curr->prev = new_node;
			return (new_node);
		}
		curr = curr->next;
		i++;
	}
	free(new_node);
	return (NULL);
}
