/*
 * File: 3-get_op_func.c
 * Author: TobiLight
 */

#include "3-calc.h"

/**
 * get_op_func - selects the correct
 *                   function to perform the operation
 *                   asked by the user.
 * @s: Operator given by the user
 *
 * Return: pointer to the function that corresponds to the
 *         operator given as a parameter
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;

	while (ops[i].op != NULL)
	{
		/* Compare user input with operator */
		if (*ops[i].op == *s && s[1] == '\0')
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
