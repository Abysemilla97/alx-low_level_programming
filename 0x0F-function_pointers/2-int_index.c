#include "function_pointers.h"

/**
 * int_index - a function that searches for an int.
 * @array: the array of int.
 * @size: the number of elements in the array.
 * @cmp: a pointer to the function to be used to compare values.
 *
 * Return: the index of the first element for which
 * the cmp function does not return 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (!array || !cmp)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}
	return (-1);
}
