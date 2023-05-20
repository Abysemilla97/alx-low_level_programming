#include <stdlib.h>
#include "main.h"

/**
 * *_memset - fills memory with bytes.
 * @s: memory area to be filled.
 * @b: char.
 * @n: num of times to copy b.
 * Return: points too the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}
	return (s);
}

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: num of element in array.
 * @size: size of the element.
 * Return: points to allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}

