#include "lists.h"

/**
 * print_listint - printing all the elements of it.
 * @h:the head of the listint_t list.
 *
 * Return: the numb of nodes present.
 */
size_t print_listint(const listint_t *h)
{
	size_t n_count = 0;
	const listint_t *new = h;

	while (new != NULL)
	{
		printf("%d\n", new->n);
		new = new->next;
		n_count++;
	}

	return (n_count);
}
