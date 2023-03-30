/*
 * File: 100-first.c
 * Author: TobiLight
*/

#include "lists.h"

/**
 * before_main - A constructor function that prints a message before main is called
 *
 * This function is executed automatically before the main function is called, thanks to the
 * GCC-specific __attribute__ ((constructor)) syntax. It simply prints the following message:
 *
 *     You're beat! and yet, you must allow,
 *     I bore my house upon my back!
 *
 * Return: This function does not return a value.
 */

void __attribute__ ((constructor)) before_main()
{
    printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}