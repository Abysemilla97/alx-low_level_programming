#include "main.h"

/**
 * binary_to_uint - converting a binary number to an unsigned int.
 * @b:  pointing to a string of 0 and 1 chars.
 * Return: the converted numbs, or 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int binaryNumb;

	binaryNumb = 0;

	if (b == NULL)
	return (0);

	for (; *b != '\0'; b++)
	{
	binaryNumb <<= 1;
	if (*b == '1' || *b == '0')
	{
		binaryNumb |= (*b - '0');
	}
	else
	{
		return (0);
	}
	}

	return (binaryNumb);
}
