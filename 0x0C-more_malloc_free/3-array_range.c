#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that create an array of integers.
 * @min: the minimum value.
 * @max: the maximum value.
 * Return: nothing NULL.
 */
int *array_range(int min, int max)
{
	int *strg, i, j;

	if (min > max)
		return (NULL);

	strg = malloc(sizeof(int) * (max - min + 1));
	if (strg == NULL)
		return (NULL);

	for (i = 0, j = min; j <= max; i++, j++)
	{
		strg[i] = j;
	}

	return (strg);
}
