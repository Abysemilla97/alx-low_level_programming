#include <stdlib.h>
#include "main.h"

/**
 * str_concat -  a function that concatenates two strings,
 * pointing to a newly allocated space in memory.
 * @s1: string 1
 * @s2: string 2
 * Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int i, j, len1, len2, t_size;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = 0;
	while (s1[len1] != '\0')
		len1++;
	len2 = 0;
	while (s2[len2] != '\0')
		len2++;

	t_size = len1 + len2;

	ptr = malloc((sizeof(char) * t_size) + 1);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		ptr[i] = s1[i];
		i++;
	}
	j = 0;
	while (i <= t_size)
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	return (ptr);
}