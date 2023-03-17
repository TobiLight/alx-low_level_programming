/*
 * File: 101-mul.c
 * Author: TobiLight
*/

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

int main(int argc, char **argv)
{
	int i, j, k, carry, len1, len2, *result;
	char *num1, *num2;

	/* Check if number of arguments is correct */
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	/* Check if num1 is composed of digits */
	num1 = argv[1];
	len1 = strlen(num1);
	for (i = 0; i < len1; i++)
	{
		if (!isdigit(num1[i]))
		{
		    printf("Error\n");
		    return (98);
		}
	}

	/* Check if num2 is composed of digits */
	num2 = argv[2];
	len2 = strlen(num2);
	for (i = 0; i < len2; i++)
	{
		if (!isdigit(num2[i]))
		{
		    printf("Error\n");
		    return (98);
		}
	}

	/* Allocate memory for result */
	result = calloc(len1 + len2, sizeof(int));
	if (result == NULL)
	{
		printf("Error\n");
		return (98);
	}

	/* Multiply num1 and num2 digit by digit */
	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			k = i + j + 1;
			result[k] += (num1[i] - '0') * (num2[j] - '0') + carry;
			carry = result[k] / 10;
			result[k] %= 10;
		}
		result[i] += carry;
	}

	/* Print result */
	i = 0;
	while (result[i] == 0 && i < len1 + len2 - 1)
	{
		i++;
	}
	while (i < len1 + len2)
	{
		putchar(result[i++] + '0');
		putchar('\n');
	}

	/* Free memory */
	free(result);
	return (0);
}
