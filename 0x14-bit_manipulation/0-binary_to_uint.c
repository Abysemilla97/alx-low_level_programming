#include "main.h"

/**
 * binary_to_uint - a function converting a binary number
 * represented as a string into an unsigned integer.
 * @b: pointing to the strings of 0 and 1.
 *
 * Return: 0 if no string or numb beyond 0 and 1.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int out = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		char digits = b[i];

		if (digits != '0' && digits != '1')
			return (0);

		out = out * 2 + (digits - '0');
	}
	return (out);
}
