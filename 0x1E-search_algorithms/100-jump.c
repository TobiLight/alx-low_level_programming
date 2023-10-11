/*
 * File: 100-jump.c
 * Author: Oluwatobiloba Light
 */

#include "search_algos.h"
#include "math.h"

/**
 * jump_search - Searches for a value in a sorted array of integers using the
 *               Jump search algorithm.
 * @array: Pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: The first index where value is located else -1 if value is not
 *         present in array or if array is NUL
 */

int jump_search(int *array, size_t size, int value)
{
	size_t jump = sqrt(size), prev = 0;

	if (array == NULL)
		return (-1);

	while (array[prev] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);

		if (array[jump] >= value || jump >= size)
			break;

		prev = jump;
		jump += sqrt(size);
	}

	printf("Value found between indexes [%ld] and [%ld]\n", prev, jump);

	while (prev <= jump)
	{
		if (prev >= size)
			return (-1);

		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);

		if (array[prev] == value)
			break;
		prev++;
	}

	if (array[prev] == value)
		return (prev);
	return (-1);
}