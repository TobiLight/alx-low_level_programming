# 0x17. C - Doubly linked lists
This documentation provides a detailed explanation of doubly linked lists, their implementation, and common operations using the C programming language.

## Table of Contents

- [Description](#description)
- [Requirements](#requirements)
- [List of Functions](#list-of-functions)
- [Usage](#usage)
- [Tasks & Files](#tasks--files)
- [Authors](#authors)

## Description
Doubly linked lists are a type of data structure commonly used in computer science and software development. They consist of a sequence of nodes, where each node contains data and two pointers that point to the `previous` and `next` nodes in the list. The doubly linked list allows for efficient traversal in both directions, making it suitable for various applications. In this project, we explore the implementation and manipulation of doubly linked lists in the C programming language. We implement functions to create, insert, delete, and traverse nodes in a doubly linked list.


## Requirements
* The code is written in C.
* The code is compiled using `gcc`.
* The code is compliant with the `C90` standard.

## List of Functions
* int insert_node_at_beginning(List **list, int data)
* int insert_node_at_end(List **list, int data)
* int delete_node(List **list, List *node)
* size_t print_list(const List *list)

## Usage
To use the functions implemented in this repository, follow these steps:

1. Clone the repository:

```bash
git clone https://github.com/your_username/doubly_linked_lists.git
```
2. Change to the repository directory:
```
cd doubly_linked_lists
```
3. Include the desired function(s) in your C program:
```
#include "lists.h"
```
4. Compile your program with the doubly linked list function(s):
```
gcc -Wall -Werror -Wextra -pedantic main.c lists.c -o my_program
```
5. Run your program:
```
./my_program
```

## Tasks & Files
* **[tests](./tests)** - Contains all the test files for the project.
* **[0-print_dlistint.c](./0-print_dlistin.c)** - Write a function that prints all the elements of a `dlistint_t` list.
    * Prototype: `size_t print_dlistint(const dlistint_t *h);`
    * Return: the number of nodes

## Author
This project is authored by **Oluwatobiloba Light**. Feel free to reach out with any questions or suggestions. :)
