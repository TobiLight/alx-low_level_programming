/*
 * File: 5-free_listint2.c
 * Author: TobiLight
*/

#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: Pointer to a pointer listint_t list
 *
 * Return: nothing
*/

void free_listint2(listint_t **head)
{
	listint_t *temp = *head;
	listint_t *temp_next;

	while (temp != NULL)
	{
		temp_next = temp->next;
		free(temp);
		temp = temp_next;
	}
	head = NULL;
}
