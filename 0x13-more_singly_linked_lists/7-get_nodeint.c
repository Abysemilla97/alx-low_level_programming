#include "lists.h"

/**
 * get_nodeint_at_index -  the nth node of a listint_t linked list.
 * @head: pointing to the beginning.
 * @index: the index of the node.
 *
 * Return: if the node does not exist, then return NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int m;

	if (head == NULL)
		return (NULL);

	for (m = 0; m < index; m++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}

	return (head);
}
