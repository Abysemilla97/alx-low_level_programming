#include "main.h"
/**
 * print_sign - print the sign of a number
 * @n: the number to be checked
 * Return: 1 is positive number, 0 is anything, -1 ias negetive number
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}

