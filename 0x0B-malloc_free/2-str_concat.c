#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings.
 * @s1: the string or space for the content 1.
 * @s2: the string or space for the content 2.
 * Return: nothing NULL.
 */
char *str_concat(char *s1, char *s2)
{
	char *str_cat;
	unsigned int l1 = 0, l2 = 0, i = 0, j = 0;

	/*If NULL is passed, treat it as an empty string*/
	if (s1 == NULL)
		s1 = " ";

        if (s2 == NULL)
		s2 = " ";

	/*Get the length of both string*/
	if (s1 != NULL)
	{
		while (s1[l1] != '\0')
			l1++;
	}

	if (s2 != NULL)
	{
		while (s2[l2] != '\0')
			l2++;
	}

        /*Allocate memory (as +1 is null terminator) and check if null*/
        str_cat = malloc((l1 + l2 + 1) * sizeof(char));
        if (str_cat ==  NULL)
                return (NULL);
	
	/*The contents of s1, and s2 into the new string*/
	if (s1)
	{
		while (i < l1)
		{
		str_cat[i] = s1[i];
		i++;
		}
	}
	if (s2)
	{
		while (i < (l1 + l2))
		{
			str_cat[i] = s2[j];
			i++;
			j++;
		}
	}
	str_cat[i] = '\0';

	return (str_cat);
}
