#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars, and initialize it.
 * @size: size to be allocated.
 * @c: character to initalize array.
 * Return: a pointer to the array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
