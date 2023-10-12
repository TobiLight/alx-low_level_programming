/*
 * File: 105-jump_list.c
 * Author: Oluwatobiloba Light
 */

#include "search_algos.h"
#include <math.h>

/**
 * jump_list - Searches for a value in a sorted singly linked list of integers
 *             using the Jump search algorithm.
 * @list: Pointer to the head of the list to search in
 * @size: The number of nodes in list
 * @value: The value to search for
 *
 * Return: Pointer to the first node where value is located else NULL if
 *         value is not present in head or if head is NULL.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, jump_size;
	listint_t *curr, *jump;

	if (list == NULL || size == 0)
		return (NULL);

	step = 0;
	jump_size = sqrt(size);
	for (curr = jump = list; jump->index + 1 < size && jump->n < value;)
	{
		curr = jump;
		for (step += jump_size; jump->index < step; jump = jump->next)
		{
			if (jump->index + 1 == size)
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n", jump->index, jump->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
		   curr->index, jump->index);

	for (; curr->index < jump->index && curr->n < value; curr = curr->next)
		printf("Value checked at index [%ld] = [%d]\n", curr->index, curr->n);
	printf("Value checked at index [%ld] = [%d]\n", curr->index, curr->n);

	return (curr->n == value ? curr : NULL);
}
