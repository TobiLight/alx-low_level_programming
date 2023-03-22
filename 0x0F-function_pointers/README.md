# 0x0F. C - Function pointers
This project has tasks that focuses on function pointers and everything you need to know about pointers in C.

* **[function_pointers.h](./function_pointers.h)** - Contains function prototypes.
* **[0-print_name.c](./0-print_name.c)** - Write a function that prints a name.
    * Prototype: `void print_name(char *name, void (*f)(char *))`;
* **[1-array_iterator.c](./1-array_iterator.c)** - Write a function that executes a function given as a parameter on each element of an array.
    * Prototype: `void array_iterator(int *array, size_t size, void (*action)(int))`;
    * where `size` is the size of the array
    * and `action` is a pointer to the function you need to use

