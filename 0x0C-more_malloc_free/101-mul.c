/*
 * File: 101-mul.c
 * Author: TobiLight
*/

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int get_num_len(char *num);
int *multiply(char *num1, char *num2);

/**
 * get_num_len - Computes the length of a string of digits
 * @num: A pointer to a string of digits
 * Return: The length of the string, or -1 if the string contains non-digits
*/
int get_num_len(char *num)
{
	int len = 0;

	while (*num != '\0')
	{
		if (*num < '0' || *num > '9')
		{
			return (-1);
		}
		len++;
		num++;
	}

	return (len);
}

/**
 * multiply - Multiplies two numbers represented as strings of digits
 * @num1: A pointer to the first number
 * @num2: A pointer to the second number
 * Return: A pointer to an array containing the product
*/
int *multiply(char *num1, char *num2)
{
	int len1 = get_num_len(num1);
	int len2 = get_num_len(num2);
	int *result = calloc(len1 + len2, sizeof(int));
	int carry, num1_digit, num2_digit, sum, i, j;

	if (result == NULL)
	{
		return (NULL);
	}

	for (int i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		num1_digit = num1[i] - '0';

		for (j = len2 - 1; j >= 0; j--)
		{
			num2_digit = num2[j] - '0';
			sum = num1_digit * num2_digit + result[i + j + 1] + carry;
			carry = sum / 10;
			result[i + j + 1] = sum % 10;
		}

		if (carry > 0)
		{
			result[i] += carry;
		}
	}
	return (result);
}

/**
 * main - Entry point. Multiplies two positive numbers
 * @argc: The number of arguments
 * @argv: An array of pointers to the arguments
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	int *result, i;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (get_num_len(argv[1]) == -1 || get_num_len(argv[2]) == -1)
	{
		printf("Error\n");
		exit(98);
	}

	result = multiply(argv[1], argv[2]);

	for (i = 0; i < get_num_len(argv[1]) + get_num_len(argv[2]); i++)
	{
		if (result[i] != 0 || i == get_num_len(argv[1]) + get_num_len(argv[2]) - 1)
		{
			break;
		}
	}

	i = 0;
	for (i = 0; i < get_num_len(argv[1]) + get_num_len(argv[2]); i++)
	{
		_putchar(result[i] + '0');
	}

	_putchar('\n');
	free(result);
	return (0);
}
