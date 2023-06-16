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
	unsigned int i;

	if (idx == 0)
		return (add_dnodeint(h, n));
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	for (i = 0; i != idx; i++)
	{
		if (i == idx)
			break;
		curr = curr->next;
	}
	if (curr->next == NULL)
		return (add_dnodeint_end(h, n));
	new_node->n = n;
	if (*h == NULL)
	{
		new_node->prev = NULL;
		new_node->next = NULL;
		*h = new_node;
		return (new_node);
	}
	new_node->prev = curr;
	new_node->next = curr->next;
	curr->next->prev = new_node;
	curr->next = new_node;
	return (new_node);
}
