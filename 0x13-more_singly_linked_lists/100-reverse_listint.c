/*
 * File: 100-reverse_listint.c
 * Author: TobiLight
*/

#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: Pointer to a pointer listint_t head node
 *
 * Return: Pointer to the first node of the reversed list
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *current;

	if (head == NULL)
		return (prev);

	while (*head != NULL)
	{
		current = *head;
		*head = current->next;
		current->next = prev;
		prev = current;
	}
	*head = prev;
	return (prev);
}
