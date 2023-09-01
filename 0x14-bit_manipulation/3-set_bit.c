#include "main.h"

/**
 * set_bit - a function setting the value of a bit
 * to 1 at a given index.
 * @n: the value.
 * @index: starting from 0 of the bit you want to set.
 *
 * Return: 1 for success, -1 for errors.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;
	unsigned long int bits = (sizeof(unsigned long int) * 8);

	if (index >= bits)
		return (-1);

	mask = 1UL << index;
	*n |= mask;

	return (1);
}
