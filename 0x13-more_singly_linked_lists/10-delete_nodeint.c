#include "lists.h"

/**
 * delete_nodeint_at_index - deleting the node at index listint_t.
 * @head: points to the beginning.
 * @index: input of node to be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp;
	listint_t *next;
	unsigned int m;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}

	tmp = *head;
	for (m = 0; m < index - 1; m++)
	{
		if (tmp->next == NULL)
			return (-1);
		tmp = tmp->next;
	}
	next = tmp->next;
	tmp->next = next->next;
	free(next);
	return (1);
}
