/**
 * _strcat - concatenates two strings.
 * @dest: dest is a strubg
 * @src: src is a string (appended word)
 *
 * Return: Pointer (dest)
*/

char * _strcat(char *dest, char *src)
{
	while (*dest)
	{
		dest++;
	}

	while (*str)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return dest;
}
