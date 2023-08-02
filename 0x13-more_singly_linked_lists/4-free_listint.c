#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list.
 * @head: the pointer ag tge beginning.
*/
void free_listint(listint_t *head)
{
	listint_t *now;

	while (head != NULL)
	{
		now = head;
		head = head->next;
		free(now);
	}
}
