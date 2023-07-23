/*
 * File: 102-free_listint_safe.c
 * Author: TobiLight
 */

#include "lists.h"

size_t unique_nodes_count(const listint_t *head);
/**
 * unique_nodes_count - counts the number of unique
 *                      nodes in a listint_t list.
 * @head: Pointer to a listint_t list
 *
 * Return: Number of unique nodes otherwise 98.
 */

size_t unique_nodes_count(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t count = 1;

	if (head == NULL || head->next == NULL)
		return (0);

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
	return (0);
}

/**
 * free_listint_safe - frees a listint_t list.
 * @h: Pointer to the address of the head of the listint_t list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t count, i;

	count = unique_nodes_count(*h);

	if (count == 0)
	{
		while (h != NULL && *h != NULL)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			count++;
		}
	}

	else
	{
		i = 0;
		while (i < count)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			i++;
		}
		*h = NULL;
	}
	h = NULL;
	return (count);
}
