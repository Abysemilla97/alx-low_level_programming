#include "lists.h"

/**
 * listint_len - the number of elements in a linked listint_t list.
 * @h: the header pointer.
 * Return: the number of elements in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t n_count = 0;

	while (h != NULL)
	{
	h = h->next;
	n_count++;
	}

	return (n_count);
}

