#include "variadic_functions.h"

/**
 * print_strings - a function that prints string, \n.
 * @separator: the string to be printed.
 * @n: the number of the string passed.
 * Return: nothing 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int j;
	char *strg;
	va_list list;

	va_start(list, n);

	for (j = 0; j < n; j++)
	{
		strg = va_arg(list, char *);

		if (strg == NULL)
			printf("(nil)");
		else
			printf("%s", strg);
	if (j != (n - 1) && separator != NULL)
		printf("%s", separator);
	}

	printf("\n");
	va_end(list);
}
