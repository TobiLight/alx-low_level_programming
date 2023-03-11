#include <stdio.h>

/*
 * File: 2-args.c
 * Author: TobiLight
*/

/**
 * main - prints all arguments it receives
 * @argc: Number of command line arguments
 * @argv: Array of pointer to characters
 *
 * Return: Always(0)
*/

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("%s\n", *argv);
		return (0);
	}

	while (*argv)
	{
		printf("%s\n", *argv);
		argv++;
	}
	return (0);
}
