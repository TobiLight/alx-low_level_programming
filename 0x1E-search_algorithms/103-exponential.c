/*
 * File: 103-exponential.c
 * Author: Oluwatobiloba Light
 */

#include "search_algos.h"
#include <math.h>

size_t mini(size_t a, size_t b)
{
	if (a <= b)
		return a;
	return b;
}

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
 * binary_search - Searches for a value in a sorted array of integers using
 *                 the Binary search algorithm.
 * @array: Pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: Tthe index where value is located else -1 if value is not present
 *         in array or if array is NULL.
 */
int binary_srch(int *array, size_t low, size_t high, int value)
{
	size_t middle, i = 0;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		middle = floor((low + high) / 2);
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
			printf("%i%s", array[i], i == high ? "\n" : ", ");
		if (array[middle] == value)
			return (middle);
		else if (array[middle] < value)
			low = middle + 1;
		else
			high = middle - 1;
	}
	return (-1);
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
	size_t bound = 1, prev, left, right;

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
	left = prev, right = mini(bound, size - 1);

	return (binary_srch(array, left, right, value));
}
