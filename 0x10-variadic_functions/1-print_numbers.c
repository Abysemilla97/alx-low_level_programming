#include "variadic_functions.h"

/**
 * print_numbers - a function that pronts numbers.
 * @separator: the string to be printed.
 * @n: the number of integers.
 * Return: nothing 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int j, pnt;
	va_list list;

	va_start(list, n);
	for (j = 0; j < n; j++)
	{
		pnt = va_arg(list, int);
		printf("%d", pnt);

		if (j != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(list);
}
