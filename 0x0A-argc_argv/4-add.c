#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*
 * File: 4-add.c
 * Author: TobiLight
*/

/**
 * main - adds positive number
 * @argc: Number of command line arguments
 * @argv: Array of pointer to characters
 *
 * Return: Always(0)
*/

int main(int argc, char *argv[])
{
	int sum = 0;
	int i = 1;

	if (argc == 1)
	{
		printf("%d\n", sum);
		return (0);
	}

	while (i < argc)
	{
		char *arg = argv[i];
		int j = 0;

		while (arg[j] != '\0')
		{
			if (!isdigit(arg[j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum += atoi(arg);
		i++;
	}

	printf("%d\n", sum);
	return (0);
}
