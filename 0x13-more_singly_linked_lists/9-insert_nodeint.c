#include "lists.h"

/**
 * insert_nodeint_at_index - a function that insert anew node.
 * @head: points to the beginning
 * @idx: starting at 0, index of the list where
 * the new node should be added.
 * @n: the new node data.
 *
 * Return: the address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *n_new, *tmp;
	unsigned int k;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		tmp = *head;
		for (k = 0; k < idx - 1 && tmp != NULL; k++)
		{
		tmp = tmp->next;
		}
		if (tmp == NULL)
			return (NULL);
	}

	n_new = malloc(sizeof(listint_t));
	if (n_new == NULL)
		return (NULL);
	n_new->n = n;

	if (idx == 0)
	{
		n_new->next = *head;
		*head = n_new;
		return (n_new);
	}

	n_new->next = tmp->next;
	tmp->next = n_new;
	return (n_new);
}

