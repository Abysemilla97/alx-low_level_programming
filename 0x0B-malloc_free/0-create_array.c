#include "main.h"
#include <stdlib.h>

/**
 * create_array -  a function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: the number of element in the array.
 * @c: the charaters in the array.
 * Return: a pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int n;
	char *i;

	if (size == 0)
		return (NULL);

	i = malloc(size * sizeof(char));

	if (i == NULL)
		return (NULL);
	for (n = 0; n < size; n++)
	{
		i[n] = c;
	}

	return (i);
}
