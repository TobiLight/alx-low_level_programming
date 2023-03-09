/*
 * File: 4-pow_recursion.c
 * Author: TobiLight
*/

#include "main.h"

/**
 * _pow_recursion -  returns the value of x raised to the power of y.
 * @x: x is an integer.
 * @y: y is an integer.
 *
 * Return: If y < 0 - -1 to indicate an error
 * If y > 0 - pow of x raised to the power of y
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
