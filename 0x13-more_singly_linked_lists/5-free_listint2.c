#include "lists.h"

/**
 * free_listint2 - a function freeing a listint list.
 * @head: the derefenced pointer to the head.
 * Return: 0 at success.
 */
void free_listint2(listint_t **head)
{
	listint_t *now;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		now = *head;
		*head = (*head)->next;
		free(now);
	}
}
