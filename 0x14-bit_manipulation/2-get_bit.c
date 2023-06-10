#include "main.h"

/**
 * get_bit - returning the value of bits at a given index.
 * @n: the numbers to be printed in the index.
 * @index: the index, starting from 0 of the bits.
 *
 * Return:  index or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{

	if (index < 64)
		return (n >> index) & 1;
	else
	{
		return (-1);
	}
}
