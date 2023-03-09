/*
 * File: 6-is_prime_number.c
 * Author: TobiLight
*/

#include "main.h"

int is_prime_helper(int n, int i);

/**
 * is_prime_helper - caluclates if number is prime or not
 * @n: n is the number to be checked
 * @i: is the divisible number
 *
 * Return: If the integer is not prime - 0
 *         If the number is prime - 1
*/

int is_prime_helper(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}

	if (n % i == 0 || n % (i + 2) == 0)
	{
		return (0);
	}

	return (is_prime_helper(n, i + 6));
}

/**
 * is_prime_number - Checks if a number is a prime number
 * @n: n is the number to be checked
 *
 * Return: If the integer is not prime - 0
 *         If the number is prime - 1
*/

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}

	if (n == 2 || n == 3)
	{
		return (1);
	}

	if (n % 2 == 0 || n % 3 == 0)
	{
		return (0);
	}

	return (is_prime_helper(n, 5));
}
