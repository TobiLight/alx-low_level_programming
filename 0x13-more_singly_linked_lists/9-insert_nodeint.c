/*
  File: 9-insert_nodeint.c
 * Author: TobiLight
*/

#include "lists.h"

/**
 * insert_nodeint - Inserts a new node at a given position.
 * @head: Pointer to a pointer listint_t  list.
 * @idx: index of the list where the new node should be added.
 * @n: Data for the listint_t list node
 *
 * Return: The address of the new node, or NULL if it failed
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current, *temp;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	/* Allocate memory for new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	if (*head == NULL)
		return (NULL);

	temp = *head;
	/* Loop through the list */
	while (temp != NULL)
	{
		current = temp;
		if (count + 1 == idx)
		{
			new_node->n = n;
			new_node->next = current->next;
			current->next = new_node;
			break;
		}
		count++;
		temp = temp->next;
	}
	return (new_node);
}
