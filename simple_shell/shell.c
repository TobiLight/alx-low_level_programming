#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

#define BUFFER_SIZE 1024

/**
 * prompt - displays the shell prompt
 */
void prompt(void)
{
	printf("$ ");
}

/**
 * read_line - reads a line of input from stdin
 *
 * Return: a pointer to the input line
 */
char *read_line(void)
{
	ssize_t buffer_size = 0;
	char *buffer = NULL;

	if (getline(&buffer, &buffer_size, stdin) == -1)
	{
		if (feof(stdin))
		{
			exit(EXIT_SUCCESS);
		}
		else
		{
			perror("getline");
			exit(EXIT_FAILURE);
		}
	}

	return buffer;
}

/**
 * execute_command - executes a command with execve
 * @command: the command to execute
 */
void execute_command(char *command)
{
	char *args[] = {command, NULL};
	if (execve(command, args, environ) == -1)
	{
		perror("execve");
		exit(EXIT_FAILURE);
	}
	char *args[BUFFER_SIZE / 2 + 1];
	int i = 0;

	args[i] = strtok(command, " \n");

	while (args[i] != NULL)
	{
		i++;
		args[i] = strtok(NULL, " \n");
	}

	if (execvp(args[0], args) == -1)
	{
		perror("execvp");
		exit(EXIT_FAILURE);
	}
}

/**
 * main - entry point for the shell program
 *
 * Return: 0 on success, otherwise 1
 */
int main(void)
{
	char *line, *token, **args[100];
	pid_t child_pid;
	int status, i = 1;

	while (1)
	{
		prompt();
		line = read_line();

		if (line[0] == '\n')
		{
			free(line);
			continue;
		}

		token = strtok(line, " \n");
		while ((args[i] = strtok(NULL, " \n")) != NULL)
		{
			i++;
		}

		if ((child_pid = fork()) == -1)
		{
			perror("fork");
			exit(EXIT_FAILURE);
		}
		else if (child_pid == 0)
		{
			execute_command(args[0], args);
			exit(EXIT_SUCCESS);
		}
		else
		{
			waitpid(child_pid, &status, 0);
		}

		free(line);
	}

	return EXIT_SUCCESS;
}