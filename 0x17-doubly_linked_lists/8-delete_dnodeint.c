/*
 * File: 8-delete_dnodeint.c
 * Author: Oluwatobiloba Light
 */

#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node from a dlistint_t
 *                            at a given index.
 * @head: A pointer to the head of the dlistint_t.
 * @index: The index of the node to delete.
 *
 * Return: Upon success - 1.
 *         Otherwise - -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr = *head;
	unsigned count = 0;

	if (*head == NULL)
		return (-1);
	while (curr != NULL)
	{
		if (count == index)
		{
			if (count == 0)
				*head = NULL;
			if (curr->prev != NULL)
				curr->prev->next = curr->next;
			if (curr->next != NULL)
				curr->next->prev = curr->prev;
		}
		curr = curr->next;
		count++;
	}
	free(curr);
	return (1);
}
