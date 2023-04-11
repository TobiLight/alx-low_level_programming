/*
 * File: 0-read_textfile.c
 * Author: TobiLight
 */

#include "main.h"
#include <unistd.h>

/**
 * read_textfile -reads a text file and prints it
 *                to the POSIX standard output.
 * @filename: name of the file to be read
 * @letters: number of letters to read and print
 *
 * Return: The actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t rd, wr;
	int op;
	char *buffer;

	/* exit if no filename */
	if (filename == NULL)
		return (0);

	/* Allocate space for buffer */
	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	if (op == -1)
	{
		free(buffer);
		return (0);
	}

	rd = read(0, buffer, letters);
	close(op);
	if (rd == -1)
	{
		free(buffer);
		return (0);
	}
	wr = write(STDOUT_FILENO, buffer, rd);
	if (wr == -1 || wr != rd)
	{
		free(buffer);
		return (0);
	}
	close(op);
	return (wr);
}
