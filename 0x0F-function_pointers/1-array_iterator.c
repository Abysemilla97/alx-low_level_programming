#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function given
 * as a parameter on each element.
 * @array: the numbers in the array.
 * @size: the size of the array.
 * @action: pointer to the function used.
 * Return: nothing 0.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array && size && action)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}

	}
}
