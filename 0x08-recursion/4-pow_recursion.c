#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - x raised to thr power of y
 * @x: the value multiplied
 * @y: the times the value is multiplied
 * Return: the value of x raised to power of y times.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
