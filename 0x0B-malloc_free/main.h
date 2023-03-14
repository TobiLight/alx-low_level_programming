#ifndef MAIN_H
#define MAIN_H

/*
 * File: main.h
 * Author: TobiLight
 * Description: Header file that contains or the
 *              prototypes of all the functions.
*/

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);

#endif
