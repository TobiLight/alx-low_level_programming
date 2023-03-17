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
int check_digits(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
		    return (0);
		i++;
	}

	return (98);
}

/**
 * _strlen - returns the length of a string
 * @s: the string to check
 *
 * Return: the length of s
*/
int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}

	return len;
}

/**
 * print_error - prints an error message to stdout and exits with a status of 98
*/
void print_error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * mul - multiplies two positive numbers
 * @num1: the first number
 * @num2: the second number
*/
char *multiply(char *num1, int len1, char *num2, int len2)
{
	int i, j, carry = 0, product;
	char *result;

	result = malloc(len1 + len2 + 1);
	if (!result)
		return (NULL);

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

	return (result);
}

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

	if (!check_digits(num1) || !check_digits(num2))
	{
		printf("Error\n");
		return (98);
	}

	len1 = strlen(num1);
	len2 = strlen(num2);

	result = multiply(num1, len1, num2, len2);

	if (!result)
	{
		printf("Error\n");
		return (98);
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
		free(result);
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
