/*
 * File: 8-sum_listint.c
 * Author: 8-sum_listint.c
*/

#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n) of
 *               a listint_t linked list.
 * @head: Pointer to a listint_t list
 *
 * Return: Sum of all data (n), otherwise if the list is empty, return 0
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
