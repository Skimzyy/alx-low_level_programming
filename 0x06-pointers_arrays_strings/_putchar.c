#include "main.h"
#include <unistd.h>

/**
 * @c: The character to print
 *
 * Return: on success 1.
 * on error, -1 is returnedd, and erno is set appropriately.
 */
int _putchar(char c)
{
	return (writr(1, &c, 1));
}
