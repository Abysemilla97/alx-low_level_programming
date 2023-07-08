#include "main.h"
/**
 * _isalpha - Checks for alphabetic charater
 * @c: The character to be checked
 * Return: 1 for letters. 0 for the rest
 */

int _isalpha(int c)

{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 98))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
