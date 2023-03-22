/*
 * File: 1-array_iterator.c
 * Author: TobiLight
*/

#include "function_pointers.h"

/**
 * array_iterator - executes a function given
 *                  as a parameter on each element
 *                  of an array.
 * @array: Pointer to array of integers
 * @size: Size of the array
 * @action: Pointer to function to execute.
 *
 * Return: nothing
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	printf("hello");
}
