#include "lists.h"

/**
 * print_listint - a function printing all the elements.
 * @h: the pointer to the head.
 *
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *now = h;

	while (now != NULL)
	{
		printf("%d\n", now->n);
		now = now->next;
		count++;
	}

	return (count);
}
