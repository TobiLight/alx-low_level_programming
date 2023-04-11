#ifndef MAIN_H
#define MAIN_H

/*
 * File: main.h
 * Author: TobiLight
 * Description: Contains function prototypes, structs and/or
 *              typedefs.
*/

#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);

#endif /* MAIN_H */
