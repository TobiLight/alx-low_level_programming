/*
 * File: 4-free_dlistint.c
 * Author: Oluwatobiloba Light
 */

#include "lists.h"

/**
 * free_dlistint - Frees a linked dlistint_t list.
 * @head: The head of the dlistint_t list.
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp, *curr = head;

	
	while(curr != NULL)
	{
		temp = curr;
		curr = curr->next;
		free(temp);
	}
	head = NULL;
}
