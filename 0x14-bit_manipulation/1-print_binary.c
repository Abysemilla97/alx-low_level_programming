#include "main.h"

/**
 * print_binary - a function printing the binary rep of a number.
 * @n: the value.
 * Return: 0 if success.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mast;
	int s_bits = (sizeof(unsigned long int) * 8 - 1);
	int i, print = 0;

	while (s_bits >= 0)
	{
		mast = 1UL << s_bits;
		i = (n & mast) ? 1 : 0;

		if (i || print)
		{
		putchar('0' + i);
		print = 1;
		}

		s_bits--;
	}

	if (!print)
		putchar('0');
}
