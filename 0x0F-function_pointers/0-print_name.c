#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name
 * @name: name
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
Footer
© 2022 GitHub, Inc.
Footer navigation
Terms
Privacy
Secu
