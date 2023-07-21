#include "variadic_functions.h"

/**
 * print_all - a function that prints anything.
 * @format: list of the types of argument passed.
 * Return: any argument given.
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *s = "";
	va_list list;

	va_start(list, format);
	if (format)
	{
	while (format[i])
	{
		switch (format[i])
		{
			case 'i':
				printf("%s%d", s, va_arg(list, int));
				break;

			case 'f':
				printf("%s%f", s, va_arg(list, double));
				break;

			case 'c':
				printf("%s%c", s, va_arg(list, int));
				break;

			case 's':
				str = va_arg(list, char *);
				if (!str)
					str = "(nil)";
				printf("%s%s", s, str);
				break;
			default:
				i++;
				continue;
		}
		s = ", ";
		i++;
	}
	printf("\n");
	va_end(list);
	}
}
