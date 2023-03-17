/*
 * File: 101-mul.c
 * Author: TobiLight
*/

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int _isdigit(char c);
int _atoi(char *s);

/**
 * _isdigit - checks if a character is a digit
 * @c: the character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the integer value of the string
 */
int _atoi(char *s)
{
	int i, res;

	res = 0;
	for (i = 0; s[i] != '\0'; ++i)
	{
		if (!_isdigit(s[i]))
		{
			printf("Error\n");
			exit(98);
		}
		res = res * 10 + s[i] - '0';
	}
	return (res);
}

/**
 * print_number - prints an integer
 * @n: the integer to print
 */
void print_number(int n)
{
	if (n / 10)
		print_number(n / 10);
	_putchar(n % 10 + '0');
}

/**
 * multiply - Multiplies two numbers represented as strings of digits
 * @num1: A pointer to the first number
 * @num2: A pointer to the second number
 * Return: A pointer to an array containing the product
*/
int main(int argc, char **argv)
{
	int num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
	return (98);
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);

	print_number(num1 * num2);
	_putchar('\n');
	return (0);
}
