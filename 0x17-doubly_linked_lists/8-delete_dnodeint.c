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
	dlistint_t *curr;
	size_t count;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	while (*head)
	{
		count++;
		*head = (*head)->next;
	}
	if (index >= count)
		return (-1);
	curr = *head;
	if (index == 0)
	{
		*head = curr->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(curr);
		return (1);
	}
	if (index == (count - 1))
	{
		while (curr->next)
			curr = curr->next;
		free(curr);
	}
	else
	{
		while (curr)
		{
			if (i == index)
			{
				curr->next->prev = curr->prev;
				curr->prev->next = curr->next;
				free(curr);
				return (1);
			}
			curr = curr->next;
			i++;
		}
	}
	return (-1);
}
