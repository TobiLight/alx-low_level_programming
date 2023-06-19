# 0x17. C - Doubly linked lists
This repository contains the solutions to the tasks assigned in the "0x18. C - Dynamic libraries" project of the Low-Level Programming series at Holberton School. The project focuses on dynamic libraries in the C programming language.

## Table of Contents
- [Description](#description)
- [Requirements](#requirements)
- [Usage](#usage)
- [Tasks & Files](#tasks--files)
- [Authors](#authors)

## Description
Dynamic libraries are collections of pre-compiled code and data that can be shared among multiple programs. They are loaded into memory during runtime and linked to the program as needed. Dynamic libraries provide a way to modularize code, promote code reuse, and reduce the size of executable files.


## Requirements
* The code is written in C.
* The code is compiled using `gcc`.
* The code is compliant with the `C89` standard.

## Usage
To use the functions provided by the libholberton.so dynamic library, compile your C program with the library and include the appropriate header file. Here's an example:

```
#include "holberton.h"

int main(void)
{
    int result = add(10, 5);
    printf("The sum is: %d\n", result);
    return 0;
}
```
To compile the above program, use the following command:
```
gcc -L. -lholberton main.c -o program_name
```
Make sure that the libholberton.so dynamic library file is present in the current directory.

## Tasks & Files
* **[libdynamic.so](./libdynamic.so)**, **[main.h](./main.h)** - Create the dynamic library libdynamic.so containing all the functions listed below:
```
int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
```
If you haven’t coded all of the above functions create empty ones, with the right prototype.
Don’t forget to push your `main.h` file in your repository, containing at least all the prototypes of the above functions.
## Author
This project is authored by **Oluwatobiloba Light**. Feel free to reach out with any questions or suggestions. :)
