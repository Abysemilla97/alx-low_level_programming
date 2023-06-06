#include "lists.h"

/**
 * sum_listint - prints the sum of all the
 * data (n) of a listint_t linked list.
 * @head: points to the beginning.
 *
 * Return: the sum, else return 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
