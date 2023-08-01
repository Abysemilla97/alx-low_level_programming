#include "lists.h"

/**
 * print_listint - a function printing all the elements of a listint_t list.
 * @h: pointing to the head of the list.
 *
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *now = h;

	while (now)
	{
		printf("%d \n", now->n);
		now = now->next;
		count++;
	}

	return (count);
}
