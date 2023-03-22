#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name
 * @name: name to print
 * @f: pointer to the print function
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name)
		return;
	if (!f)
		return;
	f(name);
}
