/*
 * File: 101-wildcmp.c
 * Author: TobiLight
*/

#include "main.h"

/**
 * wildcmp - compares two strings
 * @s1: s1 is the first string to be compared
 * @s2: s2 is the second string to be compared and
 * may contain wildcards.
 *
 * Return: If the strings can be considered identical - 1.
 *         Otherwise - 0.
*/

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}

	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}

	if (*s2 == '*')
	{
		if (wildcmp(s1, s2 + 1))
		{
			return (1);
		}

		if (*s1 != '\0' && wildcmp(s1 + 1, s2))
		{
			return (1);
		}
	}

	return (0);
}
