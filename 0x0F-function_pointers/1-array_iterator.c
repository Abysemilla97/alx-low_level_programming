#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array.
 * @array: the array of int.
 * @size: the size of the array.
 * @action: points to the array.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (!array || !action)
		return;

	for (; i < size; i++)
		action(array[i]);
}
