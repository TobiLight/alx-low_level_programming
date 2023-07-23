/*
 * File: 100-change.c
 * Author: TobiLight
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main -prints the minimum number of
 *       coiins to make change for an amount of money
 * @argc: Number of command line arguments
 * @argv: Array of pointer to characters
 *
 * Return: Always(0)
*/

int main(int argc, char *argv[])
{
	int cents, coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (1);
	}

	coins = 0;

	coins += cents / 25;
	cents %= 25;

	coins += cents / 10;
	cents %= 10;

	coins += cents / 5;
	cents %= 5;

	coins += cents / 2;
	cents %= 2;

	coins += cents;

	printf("%d\n", coins);
	return (0);
}
