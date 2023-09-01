#include "main.h"

/**
 * get_bit - a function returning the value of a bit at a given index.
 * @n: the value.
 * @index: starting from 0 of the bit you want to get.
 *
 * Return: index for success, or -1 for errors.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;
	int v_bit;
	unsigned long int bits = (sizeof(unsigned long int) * 8);

	if (index >= bits)
		return (-1);

	mask = 1UL << index;
	v_bit = (n & mask) ? 1 : 0;

	return (v_bit);
}
