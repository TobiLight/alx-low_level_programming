/*
 * File: 10-delete_nodeint.c
 * Author: TobiLight
*/

#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index
 *                           of a listint_t linked list
 * @head: Pointer to a pointer listint_t head of a node list
 * @index: index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
		return (1);
	}
	prev = *head;
	current = (*head)->next;
	while (index > 1)
	{
		if (current == NULL)
			return (-1);
		prev = current;
		current = current->next;
		index--;
	}
	if (current == NULL)
	{
		return (-1);
	}
	prev->next = current->next;
	free(current);
	return (1);
}
