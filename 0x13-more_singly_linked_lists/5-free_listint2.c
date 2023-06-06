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

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}
}
