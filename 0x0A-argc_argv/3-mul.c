#include <stdio.h>
#include <stdlib.h>

/*
 * File: 2-args.c
 * Author: TobiLight
*/

/**
 * main - multiplies two numbers
 * @argc: Number of command line arguments
 * @argv: Array of pointer to characters
 *
 * Return: Always(0)
*/

int main(int argc, char *argv[])
{
	int arg1, arg2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	arg1 = atof(argv[1]);
	arg2 = atof(argv[2]);

	result = arg1 * arg2;

	printf("%d\n", result);
	return (0);
}
