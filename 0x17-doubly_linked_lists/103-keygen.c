/*
 * File: 103-keygen.c
 * Author: Oluwatobiloba Light
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char generate_password_character(const char *input, int length, int *index);
void generate_password(const char* input, int length, char* password);

char generate_password_character(const char *input, int length, int *index)
{
	int temp = 0;
	int i = 0;

	while (i < length)
	{
		temp += input[i];
		i++;
	}
	*index = (*index + 1) % length;
	return ((temp ^ 79) & 63);
}

void generate_password(const char* input, int length, char* password) {
    const char codex[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789./";
    int temp = 0;
    int i = 0;

    password[0] = input[0];

    password[1] = generate_password_character(input, length, &i);
    password[2] = generate_password_character(input, length, &i);

    temp = input[0];
    i = 0;
    while (i < length) {
        if (input[i] > temp)
            temp = input[i];
        i++;
    }
    srand(temp ^ 14);
    password[3] = codex[rand() & 63];

    temp = 0;
    i = 0;
    while (i < length) {
        temp += (input[i] * input[i]);
        i++;
    }
    password[4] = generate_password_character(input, length, &i);

    i = 0;
    while (i < input[0]) {
        temp = rand();
        i++;
    }
    password[5] = generate_password_character(input, length, &i);

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
    char password[7];
	(void)argc;

    generate_password(argv[1], sizeof(*argv) - 1, password);

    printf("Generated password: %s\n", password);

    return 0;
}
