/*
 * File: 101-mul.c
 * Author: TobiLight
*/

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * _isdigit - checks if a character is a digit
 * @c: the character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
*/
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/**
 * main - multiplies two positive numbers
 * @argc: the number of arguments
 * @argv: the arguments
 *
 * Return: 0 on success, 98 on failure
*/
int main(int argc, char *argv[])
{
	unsigned int num1, num2, result;
	int i, j;
	
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	for (i = 1; i < 3; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (!_isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (98);
			}
		}
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;
	printf("%u\n", result);
	return (0);
}
