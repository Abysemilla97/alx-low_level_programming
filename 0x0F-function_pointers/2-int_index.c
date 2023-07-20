#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: the elements in the array.
 * @size: the numbers of element of array.
 * @cmp: pointer to the function to compare values.
 * Return: if size <= 0 and elements don't match, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);

	if (array && size && cmp)
	{
		while (i < size)
		{
			if (cmp(array[i]) == 1)
				return (i);
			i++;
		}
	}
	return (-1);

}
