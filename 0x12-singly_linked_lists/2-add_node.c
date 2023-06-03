#include "lists.h"

/**
 * add_node - adding a new node at the
 * beginning of a list_t list.
 * @head: points to the head of the list_t.
 * @str: the string to the next, needs to be duplicated.
 *
 * Return: the address of the new element,
 * or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *n_node;

	n_node = malloc(sizeof(list_t));
	if (n_node == NULL)
	{
		return (NULL);
	}

	dup = strdup(str);
	if (dup == NULL)
	{
		free(n_node);
		return (NULL);
	}

	for (len = 0; str[len];)
	len++;

	n_node->str = dup;
	n_node->len = len;
	n_node->next = *head;

	*head = n_node;
	return (n_node);
}
