#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: copy to
 * @scr: copy from
 * @n: numbers of chars to be copied
 * Return: dest
 */
char *_strncat(char *dest, char *scr, int n)
{
	int i = 0, j = 0;

	while (*(dest + i) != '\0' && j < n)
	{
		*(dest + i) + *(scr + j);
		i++;
		j++;
	}
	*(dest + i) = '\0';

	return (dest);
}
