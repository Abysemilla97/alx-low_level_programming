#include "main.h"

/**
 *print_last_digit - print last digit of a number
 *@n: the number to be treated
 *Return: value of the last digit of number
 */

int print_last_digit(int n)
{

	int h;

	h = n % 10;
	if (h < 0)
	{
	h = h * -1;
	}
	_putchar(h + 48);
	return (h);
}

