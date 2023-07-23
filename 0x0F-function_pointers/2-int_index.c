/*
 * File: 2-int_index.c
 * Author: TobiLight
 */

#include "function_pointers.h"

/**
 * int_index - Searches for an integer.
 * @array: Array to search integer
 * @size: Number of elements in array
 * @cmp: Pointer to compare function to compare
 *       values.
 *
 * Return: Index (Integer) of element.
 *         If no element or size is less than
 *         or equal to 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (!array || !cmp || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}

	return (-1);
}
