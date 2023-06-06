#include "lists.h"

/**
 * free_listint - freeing the list.
 * @head: the pointer to the head.
 *
 * Return: NULL if an error occurs.
 */

void free_listint(listint_t *head)
{
	listint_t *next;
	listint_t *new = head;

	while (new != NULL)
	{
	next = new->next;
	free(new);
		new = next;
	}
}

