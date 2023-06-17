/*
 * File: 103-keygen.c
 * Author: Oluwatobiloba Light
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void generate_password(int length, char *password, char *codex, char **argv);

/**
 * generate_password - Generate password
 * @length: length of argv
 * @password: password
 * @codex: codex password
 * @argv: argument passed
 *
 * Return: nothing
 */
void generate_password(int length, char *password, char *codex, char **argv)
{
	int i, temp;

	temp = (length ^ 59) & 63;
	password[0] = codex[temp];

	temp = 0;
	i = 0;
	while (i < length)
	{
		temp += argv[1][i];
		i++;
	}
	password[1] = codex[(temp ^ 79) & 63];
	temp = 1;
	i = 0;
	while (i < length)
	{
		temp *= argv[1][i];
		i++;
	}
	password[2] = codex[(temp ^ 85) & 63];
	temp = 0;
	i = 0;
	while (i < length)
	{
		if (argv[1][i] > temp)
			temp = argv[1][i];
		i++;
	}
	srand(temp ^ 14);
	password[3] = codex[rand() & 63];
	temp = 0;
	i = 0;
	while (i < length)
	{
		temp += (argv[1][i] * argv[1][i]);
		i++;
	}
	password[4] = codex[(temp ^ 239) & 63];
	i = 0;
	while (i < argv[1][0])
	{
		temp = rand();
		i++;
	}
	password[5] = codex[(temp ^ 229) & 63];
	password[6] = '\0';
}

/**
 * main - Generates and prints passwords for
 *        the crackme5 executable.
 * @argc: number of arguments supplied to the program.
 * @argv: array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char password[7], *codex;
	int length = strlen(argv[1]);
	(void)argc;

	codex = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	generate_password(length, password, codex, argv);
	printf("%s", password);
	return (0);
}