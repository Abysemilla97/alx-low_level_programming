#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - print natural square root of a number
 * @n: the number of the square root
 * Return: the natural square root of n or return to -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
	int i = _sqrt_recursion(n / 4) * 2;
	int j = i + 1;

	if (j * j > n)
	{
		return (i);
	}
	else
	{
		return (j);
	}
	}
}
