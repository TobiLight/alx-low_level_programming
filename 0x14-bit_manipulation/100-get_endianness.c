/*
 * File: 100-get_endianness.c
 *  Author: TobiLight
*/

#include "main.h"

/**
 * get_endianness - checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int num = 1;
	char *ptr = (char *)&num;

	return (*ptr);
}
