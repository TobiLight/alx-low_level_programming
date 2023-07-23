/*
 * File: 4-free_list.c
 * Author: TobiLight
*/

#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: list_t list
 *
 * Return: nothing
*/

void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next;

	/* traverse the node */
	while (current != NULL)
	{
		/* store the next node before freeing the current node */
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
