#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: pointer to a new string to be duplicated.
 * Return: NULL if str is NULL
 */
char *_strdup(char *str)
{
	char *nstr;
	unsigned int len, i;

	if (str == NULL)
	{
		printf("memory could not be allowed")
		return (0);
	}
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	nstr = malloc(sizeof(char) * (len + 1));

	if (nstr == NULL)
	{
		printf("memory could not be allowed")
		return (0);
	}

	for (i = 0; i < len; i++)
	{
		nstr[i] = str[i];
	}
	nstr[len] = '\0';
	return (nstr);
}
