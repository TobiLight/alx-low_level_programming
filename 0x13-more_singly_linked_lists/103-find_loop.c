/*
 * File: 103-find_loop.c
 * Author: TobiLight
 */

#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: Pointer to a listint_t list
 *
 * Return: The address of the node where the loop starts
 *         or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	if (head == NULL)
		return (NULL);

	slow = head->next;
	fast = (head->next)->next;
	while (fast)
	{
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			slow = slow->next;
			while (slow != fast)
			{
				slow = slow->next;
			}
			return (slow);
		}
		slow = slow->next;
		fast = (fast->next)->next;
	}

	return (NULL);
}
