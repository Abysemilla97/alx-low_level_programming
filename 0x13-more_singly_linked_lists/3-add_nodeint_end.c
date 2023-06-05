#include "lists.h"

/**
 * add_nodeint_end -  adds a new node at the end.
 * @head: the pointer to the last new node.
 * @n: the value of the last new node.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *n_new;
	listint_t *tmp;

	if (head == NULL)
		return (NULL);
	n_new = malloc(sizeof(listint_t));
	if (n_new == NULL)
		return (NULL);
	n_new->n = n;
	n_new->next = NULL;
	if (*head == NULL)
	{
		*head = n_new;
		return (n_new);
	}
	tmp =  *head;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = n_new;
	return (n_new);
}
