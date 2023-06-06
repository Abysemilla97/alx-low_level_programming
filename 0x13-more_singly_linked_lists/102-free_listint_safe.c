#include "lists.h"

/**
 * _ra - reallocated memory for the array.
 * @list: the list is append.
 * @size: the size of the new list.
 * @new: the new node to add.
 *
 * Return: points to new list.
 */
listint_t **_ra(listint_t **list, size_t size, listint_t *new)
{
	size_t m;
	listint_t **n_list;

	n_list = malloc(size * sizeof(listint_t *));
	if (n_list == NULL)
	{
		free(list);
		exit(98);
	}
	for (m = 0; m < size - 1; m++)
		n_list[m] = list[m];
	n_list[m] = new;
	free(list);
	return (n_list);
}

/**
 * free_listint_safe - freeing a list.
 * @h: points to the beginning.
 *
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t m, numb = 0;
	listint_t **list = NULL, *next;

	if (h == NULL || *h == NULL)
		return (numb);
	while (*h != NULL)
	{
	for (m = 0; m < numb; m++)
	{
		if (*h == list[m])
		{
			*h = NULL;
			free(list);
			return (numb);
		}
	}
	numb++;
	list = _ra(list, numb, *h);
	next = (*h)->next;
	free(*h);
	*h = next;
	}
	free(list);
	return (numb);
}

