#ifndef MAIN_H
#define MAIN_H

/*
 * File: main.h
 * Author: TobiLight
 * Description: Header file that contains or the
 *              prototypes of all the functions in
 *              0x0C-more_malloc_free.
*/

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int _putchar(char c);

#endif
