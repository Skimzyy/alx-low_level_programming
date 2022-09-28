#include "main.h"

/**
 * factorial - functions that returns the factorial of a give number
 * @n: int
 * Return: int
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	
	return (n * factorial(n-1));
}
