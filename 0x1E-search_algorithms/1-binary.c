/*
 * File: 1-binary.c
 * Author: Oluwatobiloba Light
 */

#include "search_algos.h"
#include "math.h"

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

	printf("Searching in array: ");
	for (i = first; i <= last; i++)
	{
		printf("%d", array[i]);
		if (i < last)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - Searches for a value in a sorted array of integers using
 *                 the Binary search algorithm.
 * @array: Pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: Tthe index where value is located else -1 if value is not present
 *         in array or if array is NULL.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, middle;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		print_array(array, left, right);
		middle = floor((left + right) / 2);

		if (array[middle] == value)
			return (middle);
		else if (array[middle - 1] < value)
			left = middle + 1;
		else
			right = middle - 1;
	}
	return (-1);
}
