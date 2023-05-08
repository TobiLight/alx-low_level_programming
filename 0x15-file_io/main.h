#ifndef MAIN_H
#define MAIN_H

/*
 * File: main.h
 * Author: TobiLight
 * Description: This file function prototypes, structs and/or
 *              typedefs.
 */

#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>

ssize_t read_textfile(const char *filename, size_t letters);
