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
	dlistint_t *current = *head;

	if (*head == NULL)
		return (-1);
	while (index != 0)
	{
		if (current == NULL)
			return (-1);
		current = current->next;
		index--;
	}
	if (current != *head)
	{
		current->prev->next = current->next;
		if (current->next != NULL)
			current->next->prev = current->prev;
		}
	else
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	free(current);
	return (1);
}
