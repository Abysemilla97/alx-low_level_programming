#include "main.h"

/**
 * clear_bit - setting the value of a bit to 0 at a given index.
 * @n: pointing to the number to be set.
 * @index: the index, starting from 0 of the bit.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = ~(1UL << index);
	*n = *n & mask;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	return (1);

}
