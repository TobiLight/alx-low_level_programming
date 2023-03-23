/*
 * File: 3-main.c
 * Author: TobiLight
 */

#include "3-calc.h"

/**
 * main - Program to perform simple operations.
 * @argc: Argument count
 * @argv: Array of arguments
 *
 * Returns: Always (0)
 */

int main(int argc, char *argv[])
{
    int arg1, arg2, result;
    char op;
    int (*func)(int, int);

    if (argc < 4)
    {
        printf("Error\n");
        exit(98);
    }

    /* Get numbers from user input*/
    arg1 = atoi(argv[1]);
    arg2 = atoi(argv[3]);

    /* Get function using operator entered by user */
    func = get_op_func(argv[2]);
    printf("%c\n", *argv[2]);

    /* If operator does not exist, exit */
    if (!func)
    {
        printf("Error\n");
        exit(99);
    }

    /* Get value of operator entered by user*/
    op = *argv[2];

    /* If operator is / or % by 0, exit*/
    if ((op == '/' || op == '%') && arg2 == 0)
    {
        printf("Error\n");
        exit(100);
    }

    result = func(arg1, arg2);
    printf("%d\n", result);
    return (0);
}
