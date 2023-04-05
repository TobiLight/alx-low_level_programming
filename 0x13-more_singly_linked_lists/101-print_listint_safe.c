/*
 * File: 101-print_listint_safe.c
 * Author: TobiLight
*/

#include "lists.h"

/**
 * print_nodelist - helper function to print listint_t list.
 * @count: number of nodes
 * @head: Pointer to listint_t list head node
 *
 * Return: nothing
 */

void print_nodelist(size_t count, const listint_t *head)
{
	size_t i = 0;

	if (count == 0)
	{
		while (head != NULL)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	if (count > 0)
	{
		while (i < count)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			i++;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
}

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: Pointer to a listint_t node head
 *
 * Return: The number of nodes in the list
*/

size_t print_listint_safe(const listint_t *head)
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

	print_nodelist(count, head);
	return (count);
}
