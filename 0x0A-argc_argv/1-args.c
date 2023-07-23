#include <stdio.h>

/*
 * File: 1-args.c
 * Author: TobiLight
*/

/**
 * main - Prints the number of arguments passed into main
 * @argc: Number of command line arguments
 * @argv: Array of pointer to characters
 *
 * Return: Always (0)
*/

int main(int argc, char *argv[])
{
	int i = 0;

	if (argc == 1)
	{
		printf("%d\n", argc - 1);
		return (0);
	}

	while (*argv)
	{
		i++;
		argv++;
	}

	printf("%d\n", i - 1);
	return (0);
}
