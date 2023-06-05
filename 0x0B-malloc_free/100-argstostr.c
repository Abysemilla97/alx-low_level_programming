#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: numb of arguments.
 * @av: array of arguments.
 * Return: a pointer to a new string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	int m, n, q, leng;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (m = 0; m < ac; m++)
	{
	for (n = 0; av[m][n] != '\0'; n++)
		leng++;
	leng++;
	}

	str =   malloc(sizeof(char) * (leng + 1));

	if (str == NULL)
		return (NULL);

	q = 0;

	for (m = 0; m < ac; m++)
	{
	for (n = 0; av[m][n] != '\0'; n++)
	{
		str[q] = av[m][n];
		q++;
	}
	str[q] = '\n';
	q++;
	}

	return (str);
}
