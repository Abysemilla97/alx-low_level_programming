#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns pointer to 2 dimensional array of integers.
 * @width: array row.
 * @height: array column.
 * Return: returns a pointer, return NULL on failure,
 * if width or height is 0 or negative, return NULL.
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j, k, l;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = (int **)malloc(height * sizeof(int *));
	if (!ptr)
	{	free(ptr);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
	ptr[i] = (int *) malloc(width * sizeof(int));
	if (!ptr[i])
	{
		for (j = 0; j <= i; j++)
		free(ptr[j]);
		free(ptr);
		return (NULL);
	}
	}
	for (k = 0; k < height; k++)
	{
		for (l = 0; l < width; l++)
		{
			ptr[k][l] = 0;
		}
	}
	return (ptr);
}

