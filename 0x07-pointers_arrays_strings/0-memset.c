#include "main.h"

/**
 * _memset - fills a memory block with a costant byte
 * @s: address to memory block
 * @b: char to be used
 * @n: number of bytes to be used
 *
 * Return: pointer to the memory block
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n >= 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}
