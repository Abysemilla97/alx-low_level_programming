#include "lists.h"

/**
 * free_list - freeing a list_t list.
 * @head: the head to list_t.
 */
void free_list(list_t *head)
{
	list_t *current = head;
	list_t *n_node;

	while (current != NULL)
	{
		n_node = current->next;
		free(current->str);
		free(current);
		current = n_node;
	}

}
