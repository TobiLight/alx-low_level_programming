#include "main.h"

/**
 * _strncat - concatenates two strings that will use at most n bytes
 * @dest: dest is a character
 * @src: src is a character appended to dest
 * @n: n is an integer
 *
 * Description:
 *
*/

char *_strncat(char *dest, char *src, int n)
{
    char *result = dest;


    /* get dest pointer to the end of the string*/
    while (*dest != '\0')
    {
        dest++;
    }


    while (*src != '\0' && n > 0)
    {
        *dest = *src;
        dest++;
        src++;
        n--;
    }

    *dest = '\0';

    return (result);
}
