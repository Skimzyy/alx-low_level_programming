#include "main.h"

/**
 * _strncat - concatenates strings
 * @dest: destination
 * @src: source
 * Return: char *
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j, len;
	char *ptr;

	for (j = 0; dest[j] != '\0'; ++j)
	{
		len++;
	}
	*ptr = dest + len;
	for (i = 0; src[i] != '\0' && i < n; ++i)
	{
		*ptr++ = src[i];
	}
	*ptr = '\0';
	return (dest);
}
