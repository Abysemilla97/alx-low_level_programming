#include "main.h"
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an array, using malloc.
 * @nmemb: the number of elements.
 * @size: the size of the element bytes.
 * Return: nothing NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	int i = 0, j = 0;

	if (!(nmemb && size))
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	i = nmemb * size;
	while (j < i)
	{
		ptr[j] = 0;
		j++;
	}

	return (ptr);

}
