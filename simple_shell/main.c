/*
 * File: main.c
 * Author: TobiLight
 */

#include "shell.h"

/**
 * main - entry point
 *
 * Return: Always 0
 */

int main(void)
{
	char str[] = "hello world! today,,, ! is a good-day";
	char str2[] = "hello world! today,,, ! is a good-day";
	char *tokens, *tokens2;
	tokens = _strtok(str, "! ,-");
	tokens2 = strtok(str2, " !,");

	while (tokens != NULL)
	{
		printf("%s\n", tokens);
		tokens = _strtok(NULL, "! ,-");
	}

	while (tokens2 != NULL)
	{
		printf("token is: %s\n", tokens2);
		tokens2 = strtok(NULL, " !,-");
	}
	return (0);
}