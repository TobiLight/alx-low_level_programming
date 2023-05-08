/*
 * File: 0-read_textfile.c
 * Author: TobiLight
 */

#include "main.h"

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

	/* exit if file does not exist */
	if (filename == NULL)
		return (0);

	/* Allocate space for buffer */
	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	rd = read(op, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);

	/* exit if any of these operations fail */
	if (op == -1 || rd == -1 || wr == -1 || wr != rd)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(op);
	return (wr);
}
