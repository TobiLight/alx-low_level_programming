/*
 * File: 3-main.c
 * Author: TobiLight
*/

#include "3-calc.h"

/**
 * main - Program to perform simple operations.
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int a, b, result;
	int (*op)(int, int);

	if (argc < 4)
	{
		printf("Error\n");
		exit(98);
	}

	/* Get function using operator entered by user */
	op = get_op_func(argv[2]);

	/* If operator does not exist, exit */
	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	/* Get numbers from user input*/
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	result = op(a, b);
	printf("%d\n", result);
	return (0);
}
