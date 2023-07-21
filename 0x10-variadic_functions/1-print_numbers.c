#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - a function that prints numbers.
 * @separator: the string to be printed between numbers.
 * @n: the number of integers passed to the function.
 * Return: nothing 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int j;

	va_start(list, n);
	for (j = 0; j < n; j++)
	{
		if (separator && j == 0)
			printf("%d", va_arg(list, int));
		else
			printf("%s%d", separator, va_arg(list, int));
	}
	printf("%d", va_arg(list, int));
	va_end(list);
	printf("\n");
}
