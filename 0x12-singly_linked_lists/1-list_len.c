#include "list.h"

/**
 * list_len - the numb of elements in a linked list.
 * @h: the list.
 *
 * Return: the number of nodes.
 */
size_t list_len(const list_t *h)
{
	int nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
