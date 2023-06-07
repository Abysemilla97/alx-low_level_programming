#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocating a memory block using malloc and free.
 * @ptr: a pointer to the memory previously allocated.
 * @old_size: size in bytes of the allocated space for ptr.
 * @new_size: size in bytes of the new memory block.
 *
 * Return: NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int m, k = new_size;
	char *p;
	char *oldp = ptr;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	if (new_size > old_size)
		k = old_size;

	for (m = 0; m < k; m++)
		p[m] = oldp[m];
	free(ptr);
	return (p);
}
