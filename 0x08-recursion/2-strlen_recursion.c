#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - count the length of the string
 * @s: the string to count
 * Return: integer value
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
