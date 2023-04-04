/*
 * File: 4-free_listint.c
 * Author: TobiLight
*/

#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: Pointer to a listint_t list
 *
 * Return: nothing
*/

void free_listint(listint_t *head)
{
	listint_t *temp = head;
	listint_t *temp_next;

	while (temp != NULL)
	{
		temp_next = temp->next;
		free(temp);
		temp = temp_next;
		temp_next = NULL;
	}
}
