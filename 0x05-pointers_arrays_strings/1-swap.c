#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: input parameter 1
 * @b: input parameter 2
 *
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
