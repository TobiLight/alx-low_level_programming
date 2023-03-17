/*
 * File: 101-mul.c
 * Author: TobiLight
*/

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void error(void);
void print_result(char *result, int len);
char *multiply(char *num1, char *num2);

/**
 * error - Prints error then exit
 *
 * Return: exit(98)
*/

void error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * print_result - prints result
 * @result: multiplication result
 * @len: length of result
 *
 * Return: nothing
*/

void print_result(char *result, int len)
{
	int i;

	for (i = 0; i < len; i++)
	{
		printf("%c", result[i]);
	}
	printf("\n");
}

/**
 * multiply - multiplies two positive numbers
 * @num1: positive number for multiplication
 * @num2: positive number for multiplication
 *
 * Return: nothing
*/

char *multiply(char *num1, char *num2)
{
	int len1 = 0, len2 = 0, i, j, carry, sum;
	char *result;

	/* Compute the length of the input strings */
	while (num1[len1])
		len1++;
	while (num2[len2])
		len2++;

	/* Allocate space for the result string */
	result = malloc(len1 + len2 + 1);
	if (!result)
		return (NULL);

	/* Initialize the result string to zero */
	for (i = 0; i < len1 + len2; i++)
	{
		result[i] = '0';
		result[i] = '\0';
	}
	
	/* Multiply each digit of num1 with each digit of num2 */
	for (i = len1 - 1; i >= 0; i--)
	{
		if (num1[i] < '0' || num1[i] > '9')
		    return (NULL);
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			if (num2[j] < '0' || num2[j] > '9')
				return (NULL);
			sum = (num1[i] - '0') * (num2[j] - '0') + carry + (result[i + j + 1] - '0');
			carry = sum / 10;
			result[i + j + 1] = (sum % 10) + '0';
		}
		result[i + j + 1] = carry + '0';
	}

	/* Remove leading zeros from the result string */
	for (i = 0; result[i] == '0'; i++);
		if (i > 0)
		{
			for (j = 0; j < len1 + len2 - i + 1; j++)
			{
				result[j] = result[j + i];
			}
		}
	else
	{
		j = len1 + len2;

		/* Null-terminate the result string */
		result[j] = '\0';

		return (result);
	}
}

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Array of arguments
 *
 * Return: Always(0)
*/

int main(int argc, char *argv[])
{
	int i, j, len;

	if (argc != 3)
		error();

	for (i = 1; i < argc; i++)
	{
		len = strlen(argv[i]);
		for (j = 0; j < len; j++)
		{
			if (!isdigit(argv[i][j]))
				error();
		}
	}
	multiply(argv[1], argv[2]);
	return (0);
}
