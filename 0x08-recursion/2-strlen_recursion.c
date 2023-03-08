/*
 * File: 2-strlen_recursion.c
 * Auth: TobiLight
*/

#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @s: string to be measured
 *
 * Return: Integer - Length of the string
*/

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s != '\0')
	{
		count++;
		count += _strlen_recursion(s + 1);
	}

	return (count);
}
