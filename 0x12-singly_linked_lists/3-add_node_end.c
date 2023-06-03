#include "lists.h"

/**
 * add_node_end - adding a new node at the
 * end of a list_t list.
 * @head: points to the head of the list_t.
 * @str: the string to the next, needs to be duplicated.
 *
 * Return: the address of the new element,
 * or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int len;
	char *dup;
	list_t *n_node, *end;

	n_node = malloc(sizeof(list_t));
	if (n_node == NULL)
		return (NULL);

	dup = strdup(str);
	if (str == NULL)
	{
		free(n_node);
		return (NULL);
	}

	for (len = 0; str[len]; len++)

	n_node->str = dup;
	n_node->len = len;
	n_node->next = NULL;

	if (*head == NULL)
		*head = n_node;
	else
	{
		end = *head;
		while (end->next != NULL)
		end = end->next;
		end->next = n_node;
	}
	return (*head);
}
