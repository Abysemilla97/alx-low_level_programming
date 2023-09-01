#include "main.h"

/**
 * clear_bit - a function setting the value of a
 * bit to 0 at a given index.
 * @n: the value of a bit.
 * @index: the index, starting from 0 of the bit to set.
 *
 * Return: 1 for success, or -1 for error.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
        unsigned long int mask;
        unsigned long int bits = (sizeof(unsigned long int) * 8);

        if (index >= bits)
                return (-1);

        mask = 1UL << index;
        mask = ~mask;
        *n &= mask;

        return (1);
}

