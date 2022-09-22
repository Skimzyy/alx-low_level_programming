#include "main.h"

/**
 * _strcat - concatenates 2 strings
 * @dest: destination array
 * @scr: source array
 * Return: destination array
 */
char *_strcatchar(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != 0)
		ptr++;

	while (*src != 0)
		*ptr++ = *src++;

	*ptr = 0;

	return (dest);
}
