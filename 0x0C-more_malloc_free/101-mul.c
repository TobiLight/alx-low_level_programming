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

void multiply(char *num1, char *num2)
{
	int len1, len2, len, carry, digit, i, j;
	char *result;

	len1 = strlen(num1);
	len2 = strlen(num2);
	len = len1 + len2;
	result = (char *) calloc(len + 1, sizeof(char));

	if (result == NULL)
		error();

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			digit = (num1[i] - '0') * (num2[j] - '0') + carry + result[i+j+1] - '0';
			carry = digit / 10;
			result[i + j + 1] = (digit % 10) + '0';
		}
		result[i] += carry;
	}

	while (len > 0 && result[len - 1] == '0')
	{
		len--;
	}

	if (len == 0)
	{
		printf("0\n");
	}
	else
	{
		print_result(result, len);
	}

	free(result);
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
