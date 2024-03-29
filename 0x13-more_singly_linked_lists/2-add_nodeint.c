#include "lists.h"

/**
 * add_nodeint - a function adding a new node at the beginning.
 * @head: the pointer to the head.
 * @n: the value in the node.
 *
 * Return: the address of the element or NULL if it fails.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
