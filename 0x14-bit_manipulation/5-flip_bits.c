#include "main.h"

/**
 * flip_bits - numbering of bits you would need to flip.
 * @n: first number to flip from.
 * @m: second number to flip from.
 *
 * Return: the total numbers of bits needed to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int f_result = n ^ m;
	unsigned int c_bits;

	c_bits = 0;

	while (f_result != 0)
	{
		f_result = f_result & (f_result - 1);
		c_bits++;
	}

	return (c_bits);
}
