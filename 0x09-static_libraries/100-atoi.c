#include "main.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

/**
 * _atoi - converting a string into an integer.
 * @s: the string to use.
 * Return: the integer.
 */
int _atoi(char *s)
{
	int sg = 1;
	int i = 0;
	unsigned int rs = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
		sg *= -1;
		i++;
	}
	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		rs = (rs * 10) + (s[i] - '0');
		i++;
	}
	rs *= sg;
	return (rs);
}
