#include "main.h"

/**
 * _pow_recursion - function returning the value of x raised to the power of y.
 * @x: the value.
 * @y: the power.
 * Return: the power.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	/*get what will add always until x  or y = 0, and mult by 1*/
	return (x * _pow_recursion(x, y - 1));
}
