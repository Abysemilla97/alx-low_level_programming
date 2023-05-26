#include "function_pointers.h"

/**
 * print_name - print a name.
 * @name: name of person to print.
 * @f: this is a pointer to the print a name.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
