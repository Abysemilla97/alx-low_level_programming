#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - to allocates memory using malloc.
 * @b: num of bytes to be allocated.
 * Return: a pointer to the allocated memory,
 * if malloc fails, cause normal process termination with a status value of 98.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
