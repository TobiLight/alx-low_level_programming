# 0x17. C - Doubly linked lists
This repository contains the solutions to the tasks assigned in the "0x18. C - Dynamic libraries" project of the Low-Level Programming series at Holberton School. The project focuses on dynamic libraries in the C programming language.

## Table of Contents
- [Description](#description)
- [Requirements](#requirements)
- [List of Functions](#list-of-functions)
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
* **[tests](./tests)** - Contains all the test files for the project.
* **[0-print_dlistint.c](./0-print_dlistin.c)** - Write a function that prints all the elements of a `dlistint_t` list.
    * Prototype: `size_t print_dlistint(const dlistint_t *h);`
    * Return: the number of nodes

## Author
This project is authored by **Oluwatobiloba Light**. Feel free to reach out with any questions or suggestions. :)
