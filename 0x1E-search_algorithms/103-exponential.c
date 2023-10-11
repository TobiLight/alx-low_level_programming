/*
 * File: 103-exponential.c
 * Author: Oluwatobiloba Light
 */

#include "search_algos.h"
#include <math.h>

/**
 * print_array - Prints the elements of an array
 * @array: Pointer to the first element of the array to search in
 * @first: First of the array
 * @last: Last index of the array
 *
 * Return: nothing
 */
void print_array(int *array, size_t first, size_t last)
{
	size_t i = 0;

	for (i = first; i <= last; i++)
	{
		printf("%d", array[i]);
		if (i < last)
			printf(", ");
	}
	printf("\n");
}

/**
 * exponential_search - Searches for a value in a sorted array of integers
 *                      using the Exponential search algorithm.
 * @array: Pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: The first index where value is located else -1 if value is not
 *         present in array or if array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1, prev, left, right, middle;

	if (array == NULL || size == 0)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		prev = bound;
		printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	if (bound >= size)
		bound = size - 1;

	printf("Value found between indexes [%ld] and [%ld]\n", prev, bound);
	left = prev, right = bound;

	while (left <= right)
	{
		printf("Searching in array: ");
		middle = floor((left + right) / 2);
		print_array(array, left, right);
		if (array[middle] == value)
			return (middle);
		else if (array[middle - 1] < value)
			left = middle + 1;
		else
			right = middle - 1;
	}

	return (-1);
}
