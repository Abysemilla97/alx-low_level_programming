#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - a function that prints strings, \n.
 * @separator: the string to be printed between the strings.
 * @n: the number of strings passed.
 * Return: nothing 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *strg;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n - 1; i++)
	{
		strg = va_arg(list, char *);
		if (separator)
		{
			if (!strg)
				printf("(nil)%s", separator);
			else
				printf("%s%s", strg, separator);
		}
		else
		{
			if (!strg)
				printf("(nil)");
			else
				printf("%s", strg);
		}
	}
	printf("%s", va_arg(list, char *));
	va_end(list);
	printf("\n");
}
