#include "main.h"

/**
 * print_binary - printing the binary rep of a number.
 * @n: numbers to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int p_digits = 1;

	if (n == 0)
	{
		putchar('0');
		return;
	}

	while (mask > 0)
	{
	if ((n & mask) != 0)
		p_digits = 0;

	if (!p_digits)
		putchar((n & mask) ? '1' : '0');

	mask >>= 1;
	}
}
