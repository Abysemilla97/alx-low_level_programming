#include "lists.h"

/**
 * _r - reallocates memory for the array.
 * @list: the list to append.
 * @size: the size of the new list.
 * @new: the new node to add to the list.
 *
 * Return: the pointer to the new list.
 */
const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
	size_t m;
	const listint_t **newlist;

	newlist = malloc(size * sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (m = 0; m < size - 1; m++)
		newlist[m] = list[m];

	newlist[m] = new;
	free(list);
	return (newlist);
}

/**
 * print_listint_safe - printing a listint_t linked list.
 * @head: the pointing to the beginning.
 *
 * Return: the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t m, numb = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
	for (m = 0; m < numb; m++)
	{
	if (head == list[m])
	{
		printf("-> [%p] %d\n", (void *)head, head->n);
		free(list);
		return (numb);
	}
	}
	numb++;
	list = _r(list, numb, head);
	printf("[%p] %d\n", (void *)head, head->n);
	head = head->next;
	}
	free(list);
	return (numb);
}
