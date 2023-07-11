#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer to a newly
 * allocated space in memory.
 * @str: a copy of the string given as a parameter.
 *
 * Return: NULL.
 */
char *_strdup(char *str)
{
	char *p_str;
	unsigned int lengt = 0, dupl;

	/*Return NULL if str is NULL*/
	if (str == NULL)
		return (NULL);

	/*Get the length of str*/
	while (str[lengt] != '\0')
		lengt++;

	/*Size and allocat memory*/
	p_str = (char *)malloc((lengt * sizeof(char)) + 1);
	if (p_str == NULL)
		return (NULL);

	/*Duplicating the string*/
	for (dupl = 0; dupl < lengt; dupl++)
	{
		p_str[dupl] = str[dupl];
	}
	p_str[lengt] = '\0';
	return (p_str);
}
