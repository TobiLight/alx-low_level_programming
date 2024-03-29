/*
 * File: 6-pop_listint.c
 * Author: TobiLight
*/

#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list
 * @head: Pointer to a pointer listint_t list
 *
 * Return: Head node's data (n), otherwise if empty, return 0
*/

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);
	temp = *head;
	n = temp->n;
	*head = (*head)->next;
	free(temp);
	return (n);
}
