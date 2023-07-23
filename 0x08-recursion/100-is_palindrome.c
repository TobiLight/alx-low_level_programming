/*
 * File: 100-is_palindrome.c
 * Author: TobiLight
*/

#include "main.h"

int find_strlen(char *s);
int is_palindrome_helper(char *s, int len, int index);

/**
 * find_strlen - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: Integer - Length of the string
*/

int find_strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += find_strlen(s + len);
	}

	return (len);
}

/**
 * is_palindrome_helper - Checks if a string is a palindrome
 * @s: s is the string to be checked
 * @left: left is the starting index of the string to be checked
 * @right: right is the end index of the string to be checked
 *
 * Return: Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
*/

int is_palindrome_helper(char *s, int left, int right)
{
	if (left >= right)
	{
		return (1);
	}

	if (s[left] != s[right])
	{
		return (0);
	}

	return (is_palindrome_helper(s, left + 1, right - 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: s is the string to be checked
 *
 * Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
*/

int is_palindrome(char *s)
{
	int len = find_strlen(s);

	return (is_palindrome_helper(s, 0, len - 1));
}
