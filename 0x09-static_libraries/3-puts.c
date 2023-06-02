#include "main.h"

/**
* _puts - Program prints a string to stdout.
* @str: The string to be printed.
* _putchar to print a new line
*/
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
