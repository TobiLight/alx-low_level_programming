# 0x1A. C - Hash tables
This project covers the concept of hash tables in the C programming language. Hash tables are data structures that allow efficient storage and retrieval of key-value pairs. This repository contains C programs that implement hash tables and various functions associated with them.

## Table of Contents
- [Description](#description)
- [Requirements](#requirements)
- [Usage](#usage)
- [Compilation](#compilation)
- [Data Structures](#data-structures)
- [Tasks & Files](#tasks--files)
- [Authors](#authors)


## Description
Hash tables are data structures that allow efficient storage and retrieval of key-value pairs. They are commonly used in computer science and software development due to their fast lookup times. This repository provides a practical understanding of hash tables and their implementation in the C programming language.

## Requirements
- C Compiler: The programs are written in the C programming language, so you need a C compiler installed on your system. Some popular C compilers include GCC (GNU Compiler Collection) and Clang.

- Operating System: The programs are compatible with various operating systems, including Linux, macOS, and Windows. Ensure that you have a compatible operating system installed on your machine.

- Text Editor or Integrated Development Environment (IDE): You need a text editor or an IDE to view and modify the source code files. Examples of text editors include Vim, Emacs, and Notepad++. IDEs like Visual Studio Code, Xcode, and Code::Blocks provide a more feature-rich development environment.

## Usage
To execute a compiled program, use the following command:

```
./<output_file>
```
Replace <output_file> with the name of the compiled file.

## Compilation
To compile the C programs, use the following command:

```
gcc -Wall -Werror -Wextra -pedantic <source_file>.c -o <output_file>
```
Replace <source_file> with the name of the C file you want to compile and <output_file> with the desired name for the output file.

## Data Structures
Please use these data structures for this project:
```
/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;
```

## Tasks & Files
* **[hash_tables.h](./hash_tables.h)** - Header file containing the structure and function prototypes for working with hash tables.
* **[0-hash_table_create.c](./0-hash_table_create.c)** - Implementation of a function that creates a new hash table.

## Author
This project is authored by **Oluwatobiloba Light**. Feel free to reach out with any questions or suggestions. :)