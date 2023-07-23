#include "../main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *concat, *concat2;

    concat = string_nconcat("Best ", "School !!!", 6);
    concat2 = string_nconcat("Best ", "School !!!", 15);
    printf("%s\n", concat);
    printf("%s\n", concat2);
    free(concat);
    free(concat2);
    return (0);
}
