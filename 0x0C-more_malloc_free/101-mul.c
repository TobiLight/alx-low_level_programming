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
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, 98 on error
*/

int main(int argc, char *argv[])
{
	int i, j, len1 = 0, len2 = 0, carry = 0, product;
	char *num1, *num2, *result;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = argv[1];
	num2 = argv[2];

	while (num1[len1])
	{
		if (num1[len1] < '0' || num1[len1] > '9')
		{
			printf("Error\n");
			exit(98);
		}
		len1++;
	}

	while (num2[len2])
	{
		if (num2[len2] < '0' || num2[len2] > '9')
		{
			printf("Error\n");
			exit(98);
		}
		len2++;
	}

	result = malloc(len1 + len2 + 1);
	if (!result)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 0; i < len1 + len2; i++)
	{
		result[i] = '0';
	}
	result[i] = '\0';

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			product = (num1[i] - '0') * (num2[j] - '0') + carry + (result[i + j + 1] - '0');
			carry = product / 10;
			result[i + j + 1] = (product % 10) + '0';
		}
		result[i + j + 1] += carry;
	}

	i = 0;
	while (result[i] == '0')
	{
		i++;
	}
	if (result[i] == '\0')
	{
		_putchar('0');
		_putchar('\n');
		return (0);
	}

	while (result[i])
	{
		_putchar(result[i]);
		i++;
	}
	_putchar('\n');

	free(result);
	return (0);
}
