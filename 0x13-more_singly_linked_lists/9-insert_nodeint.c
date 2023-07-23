/*
 * File: 9-insert_nodeint.c
 * Author: TobiLight
*/

#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: Pointer to a pointer listint_t  list.
 * @idx: index of the list where the new node should be added.
 * @n: Data for the listint_t list node
 *
 * Return: The address of the new node, or NULL if it failed
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current;

	if (head == NULL)
		return (NULL);
	/* Allocate memory for new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	current = *head;
	while (idx > 1)
	{
		if (!current)
			return (NULL);
		current = current->next;
		idx--;
	}
	if (!current)
	{
		free(current);
		return (NULL);
	}
	new_node->next = current->next;
	current->next = new_node;
	return (new_node);
}
