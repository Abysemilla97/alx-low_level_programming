#include "main.h"

/**
 * flip_bits - a function returning the number of bits
 * you would need to flip to get from one number to another.
 * @n: the value.
 * @m: a variable.
 *
 * Return: the number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int numb = 0;
	unsigned long int result = n ^ m;

	while (result != 0)
	{
		numb += result & 1;
		result >>= 1;
	}

	return (numb);
}

