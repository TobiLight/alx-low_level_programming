/*
 * File: 1-create_file.c
 * Author: TobiLight
 */

#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: name of the file to be created
 * @text_content: Content of the created file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int op, wr, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len])
		{
			len++;
		}
		wr = write(op, text_content, len);
	}
	op = open(filename, O_WRONLY | O_APPEND);

	if (op == -1 || wr == -1)
		return (-1);

	close(op);
	return (1);
}
