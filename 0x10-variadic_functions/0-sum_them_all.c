#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that returns a sum of all.
 * @n: the number to sum up.
 * Return: nothing 0;
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list all;
	unsigned int i, add = 0;

	if (n == 0)
		return (0);

	va_start(all, n);
	for (i = 0; i < n; i++)
	{
		add += va_arg(all, int);
	}
	va_end(all);

	return (add);
}
