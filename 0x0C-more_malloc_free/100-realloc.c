#include "main.h"
#include <stdlib.h>

/**
 * _realloc - a function that reallocates a memory block
 * using malloc and free.
 * @ptr: the memory previously allocated.
 * @old_size: the size in bytes.
 * @new_size: the new size for new block.
 * Return: nothing NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *n_ptr, *o_ptr = ptr;
	unsigned int i, max = new_size;

	if (ptr == NULL)
	{
		n_ptr = malloc(new_size);
			return (n_ptr);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (old_size == new_size)
		return (ptr);

	n_ptr = malloc(new_size);
	if (n_ptr == NULL)
		return (NULL);

	/*assigning old size to new size and points to i*/
	if (new_size > old_size)
		max = old_size;
	for (i = 0; i < max; i++)
		n_ptr[i] = o_ptr[i];

	free(ptr);
	return (n_ptr);
}
