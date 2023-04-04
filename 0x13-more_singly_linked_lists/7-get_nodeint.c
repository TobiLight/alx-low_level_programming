/*
 * File: 7-get_nodeint.c
 * Author: TobiLight
*/

#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: Pointer to a listint_t list
 * @index: Index of the node
 *
 * Return: The nth node of a listint_t linked list.
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *node = NULL;

	if (head == NULL)
		return (node);

	while (head != NULL)
	{
		if (count == index)
		{
			node = head;
			break;
		}
		count++;
		head = head->next;
	}
	return (node);
}
