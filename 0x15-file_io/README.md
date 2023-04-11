# 0x15 .C - File IO
This project, **File IO** focuses on creating, opening, reading or writing to a file.

* **[main.h](./main.h)** - Contains all the function prototypes, structs or typedefs for this project.
* **[test_case](./test_case)** - Contains all the main.c files used to test individual tasks.
* **[0-read_textfile.c](./0-read_textfile.c)** - Write a function that reads a text file and prints it to the `POSIX` standard output.
    * Prototype: `ssize_t read_textfile(const char *filename, size_t letters);`
    * where letters is the number of letters it should read and print
    * returns the actual number of letters it could read and print
    * if the file can not be opened or read, return `0`
    * if `filename` is `NULL` return `0`
    * if `write` fails or does not write the expected amount of bytes, return `0`