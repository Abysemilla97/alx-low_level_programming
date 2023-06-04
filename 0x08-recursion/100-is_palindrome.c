#include "main.h"

/**
 * _strlen_recursion - checks the length of string.
 * @s: the string.
 * Return: recursion.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
	return (0);
	}
	return (1 + _strlen_recursion(++s));
}

/**
 * check_p - checking if string is palindrome.
 * @s: pointer to the string.
 * @len: the postion.
 * Return: 1 if it's palindrome or 0 if not.
 */
int check_p(char *s, int len)
{
	if (len > 0)
	{
	return (1);
	}
	if (*s == *(s + len))
	{
	return (check_p(s + 1, len - 2));
	}
	return (0);
}

/**
 * is_palindrome - checking if string is a palindrome.
 * @s: pointer to the string.
 * Return: returns 1 if string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	int leng = _strlen_recursion(s);

	return (check_p(s, leng - 1));
}
