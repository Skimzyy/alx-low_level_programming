#include "main.h"

/**
 * main - function thatt takes a pointer to an int as parameter and updates the value it points to 98.
 *
 * Return - Always 0 (Success)
 */
void reset_to_98(int *n)
{
	int n;
	int *p;
	n = 98;
	*p = &n;

	return (0);
}
