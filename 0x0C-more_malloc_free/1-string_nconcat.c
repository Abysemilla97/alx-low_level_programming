#include "main.h"
#include <string.h>

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: the first string.
 * @s2: the second string.
 * @n: the number of byte in s2.
 * Return: Always 0;
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i, j;
	char *strg;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	if (n >= len2)
		n = len2;

	strg = malloc(sizeof(char) * (len1 + len2 + n) + 1);
	if (strg == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		strg[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		strg[len1 + j] = s2[j];
	}

	strg[len1 + n] = '\0';
	return (strg);
}
