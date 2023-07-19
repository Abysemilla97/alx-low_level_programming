#include "function_pointers.h"

/**
 * print_name - a function that prints a name.
 * @name: the name to print.
 * @f: the pointer to the function f.
 * Return: nothing 0.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}

}
