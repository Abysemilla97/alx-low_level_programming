#include  "lists.h"

/**
 * pop_listint - a function deleting the head nodes
 * @head: the pointer to the head of the list.
 *
 * Return: the head of node data, n.
 */
int pop_listint(listint_t **head)
{
	listint_t *now = *head;
	int num;

	if (*head == NULL)
	{
		return (0);
	}

	*head = (*head)->next;
	num = now->n;
	free(now);

	return (num);
}
