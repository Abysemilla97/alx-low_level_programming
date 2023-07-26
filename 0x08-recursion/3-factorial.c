#include "main.h"

/**
 * factorial - a function that returns the factorial of a num.
 * @n: the number.
 * Return: the result of factorial.
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	/*for a negetive value*/
	else if (n < 0)
	{
		return (-1);
	}
	/*multiply the next number as next num is from  previous num -1*/
	return (n * factorial(n - 1));
}
