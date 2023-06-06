#include "lists.h"

/**
 * free_listint2 - freeing a listint_t list.
 * @head: the pointer of list.
 *
 * Return: the void.
 */
void free_listint2(listint_t **head)
{
	listint_t *next;
	listint_t *new = *head;

	if (new == NULL)
		return;

	while (new != NULL)
	{
		next = new->next;
		free(new);
		new = next;
	}
}
