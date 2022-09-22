#include "main.h"

/**
 * strcat - concatenates the string pointed to by @scr, including the x
 * @dest: A pointer to the string to be concatenated upon.
 * @scr: The source to be appended to @dest.
 * Return: A pointer to the destination string @dest.
 */
char *_strcat(char *dest, char *src)
{
	int i,j,k;
	int len1;
	int len2;

	len1 = 0;
	len2 = 0;
	for (i = 0; dest[i] != '\0'; ++i)
	{
		len1++;
	}
	for (j = 0; src[j] != '\0'; ++j)
	{
		len2++;
	}
	for (k = 0; k < len2; ++k)
	{
		dest[len1 + k] = scr[k];
	}
	dest[len1 + k] = '\0';
	return (dest);
}
