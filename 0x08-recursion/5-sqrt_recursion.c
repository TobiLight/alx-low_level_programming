/*
 * File: 5-sqrt_recursion.c
 * Author: TobiLight
*/

#include "main.h"

int find_sqrt(int n, int low, int high);

/**
 * find_sqrt - Binary search to find square root of n
 * @n: n is an integer we are finding square root of
 * @low: low is an integer
 * @high: high is an integer
 *
 * Return: Integer
*/

int find_sqrt(int n, int low, int high)
{
	int mid = (low + high) / 2;

	if (mid > n / mid)
	{
		return (find_sqrt(n, low, mid - 1));
	}

	if ((mid + 1) > n / (mid + 1))
	{
		return (mid);
	}

	return (find_sqrt(n, mid + 1, high));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: n is an integer and the number to find sqrt of
 *
 * Return: Integer - the square root of n
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0 || n == 1)
	{
		return (n);
	}

	return (find_sqrt(n, 1, n));
}
