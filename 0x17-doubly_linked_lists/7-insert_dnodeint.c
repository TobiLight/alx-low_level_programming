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
	dlistint_t *curr = *h, *temp, *new_node;
	unsigned int i;

	if (*h == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	for (i = 0; curr != NULL; i++)
	{
		if (i == idx)
		{
			new_node->prev = temp;
			new_node->next = temp->next;
			temp->next = new_node;
			break;
		}
		temp = curr;
		curr = curr->next;
	}
	return (new_node);
}
