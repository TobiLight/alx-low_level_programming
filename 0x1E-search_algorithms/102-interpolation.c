/*
 * File: 102-interpolation.c
 * Author: Oluwatobiloba Light
 */

#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array of integers
 *                        using the Interpolation search algorithm.
 * @array: Pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: The first index where value is located else -1 if value is not
 *         present in array or if array is NULL
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos;

	if (array == NULL || size == 0)
		return (-1);

	while (low <= high && value >= array[low] && value <= array[high])
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) *
					 (value - array[low]));
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);

		if (array[pos] < value)
			low = pos + 1;

		if (array[pos] > value)
			high = pos - 1;
	}

	pos = low + (((double)(high - low) / (array[high] - array[low])) *
				 (value - array[low]));
	printf("Value checked array[%ld] is out of range\n", pos);
	return (-1);
}
