#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenating two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: size of bytes.
 * Return: NULL, points to a newly allocated space.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len = 0, size = 0, j = 0, k = 0;
	char *p;

	while (s1 && s1[len])
		len++;
	while (s2 && s2[size])
		size++;

	if (n < size)
		p = malloc(sizeof(char) * (len + n + 1));
	else
		p = malloc(sizeof(char) * (len + size + 1));

	if (!p)
		return (NULL);

	while (j < len)
	{
		p[j] = s1[j];
		j++;
	}

	while (n < size && j < (len + n))
		p[j++] = s2[k++];

	while (n >= size && j < (len + size))
		p[j++] = s2[k++];

	p[j] = '\0';
	return (p);
}
