#include "main.h"

/**
 * strcat - concatenates the string pointed to by @scr, including the x
 * @dest: A pointer to the string to be concatenated upon.
 * @scr: The source to be appended to @dest.
 * Return: A pointer to the destination string @dest.
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; scr[index]; index++)
		dest[dest_len++] = scr[index];

	return (dest);
}
