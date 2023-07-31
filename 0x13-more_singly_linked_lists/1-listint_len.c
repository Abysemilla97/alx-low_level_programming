#include "lists.h"

/**
 * listint_len - a function returning the number of elements in a list.
 * @h: the pointer to head.
 *
 * Return: the number of elements.
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *now = h;

	while (now != NULL)
	{
		now = now->next;
		count++;
	}

	return (count);
}
