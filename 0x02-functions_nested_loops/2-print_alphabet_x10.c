#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for  (j = 'a'; j <= 'z'; j++)
		{
			_putchar('a' + j);
		}
	}
	_putchar('\n');
}