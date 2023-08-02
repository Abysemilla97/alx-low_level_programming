#include "lists.h"

/**
 * add_nodeint_end - a function adding a new node at end.
 * @head: the pointer to the head.
 * @n: the value if the node.
 *
 * Return: the address of the new element, or NULL if failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		listint_t *now = *head;
		
		while (now->next != NULL)
		{
		now = now->next;
		}
		
	now->next = new;
	}

	return (new);
}
