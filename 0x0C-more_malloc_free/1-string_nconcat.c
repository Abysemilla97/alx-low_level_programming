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
	unsigned int len1 = strlen(s1), len2 = strlen(s2);
	char *strg;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n >= len2)
		n = len2;

	strg = malloc(sizeof(char) * (len1 + len2 + n + 1));
	if (strg == NULL)
		return (NULL);

	memcpy(strg, s1, len1);
	memcpy(strg + len1, s2, n);
	strg[len1 + n] = '\0';

	return (strg);
}
