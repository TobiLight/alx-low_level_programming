/*
 * File: 104-advanced_binary.c
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
 * advanced_binary_recursion - Searches for a value in a sorted array of
 *                             integers using the Binary search algorithm.
 * @array: Pointer to the first element of the array to search in
 * @left: Lower bound index
 * @right: Upper bound index
 * @value: The value to search for
 *
 * Return: The index where value is located else -1 if value is not present
 *         in array or if array is NULL.
 */
int advanced_binary_recursion(int *array, size_t left, size_t right, int value)
{
	size_t middle;

	if (left > right)
		return (-1);

	if (left <= right)
	{
		print_array(array, left, right);
		middle = floor((left + right) / 2);

		if (array[left] == value)
			return (left);

		if (array[left] != array[right])
		{
			if (array[middle] < value)
				return (advanced_binary_recursion(array, middle + 1, right, value));
			else if (array[middle] >= value)
				return (advanced_binary_recursion(array, left, middle, value));
		}
	}
	return (-1);
}

/**
 * advanced_binary - Searches for a value in a sorted array of integers using
 *                 the Binary search algorithm.
 * @array: Pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: The index where value is located else -1 if value is not present
 *         in array or if array is NULL.
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1;

	if (array == NULL)
		return (-1);

	return (advanced_binary_recursion(array, left, right, value));
}
