/*
 * File: 3-op_functions.c
 * Author: TobiLight
 */

#include "3-calc.h"

/**
 * op_add - Calculates sum.
 * @a: Integer
 * @b: Integer
 *
 * Return: Integer (Sum)
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Calculates difference.
 * @a: Integer
 * @b: Integer
 *
 * Return: Integer (Difference)
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Calculates product.
 * @a: Integer
 * @b: Integer
 *
 * Return: Integer (Product)
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Calculates division of two numbers.
 * @a: Integer
 * @b: Integer
 *
 * Return: Integer (Division)
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Calculates modulo of two numbers.
 * @a: Integer
 * @b: Integer
 *
 * Return: Integer (Modulo)
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
