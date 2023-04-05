/*
 * File: 101-print_listint_safe.c
 * Author: TobiLight
 */

#include "lists.h"

size_t count_unique_nodes(const listint_t *head);
/**
 * count_unique_nodes - counts the number of unique
 *                      nodes in a listint_t list.
 * @head: Pointer to a listint_t list
 *
 * Return: Number of unique nodes otherwise 98.
 */

size_t count_unique_nodes(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t count = 1;

	if (head == NULL || head->next == NULL)
		exit(98);

	/* Make slow one step ahead and fast 2 steps ahead */
	slow = head->next;
	fast = (head->next)->next;
	while (fast)
	{
		/* if slow and fast are at the same meeting point */
		if (slow == fast)
		{
			/* take slow pointer to the beginning */
			slow = head;
			/* Move slow & fast pointer one step till they meet again */
			while (slow != fast)
			{
				count++;
				slow = slow->next;
				fast = fast->next;
			}
			/* Move slow pointer a step ahead when they meet */
			slow = slow->next;
			while (slow != fast)
			{
				count++;
				slow = slow->next;
			}
			return (count);
		}
		slow = slow->next;
		fast = (fast->next)->next;
	}
	return (count);
}

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: Pointer to a listint_t node head
 *
 * Return: The number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 1, i;

	count = count_unique_nodes(head);
	if (count == 0)
	{
		for (; head != NULL; count++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	if (count > 0)
	{
		for (i = 0; i < count; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (count);
}
