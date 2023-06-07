#include "lists.h"

/**
 * find_listint_loop -  finding the loop in a linked list,
 * using the Floyd's cycle-finding algorithm.
 * @head: the pointer to the beginning.
 *
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *hare = head;
	listint_t tortoise;

	while (hare && tortoise && hare->next)
	{
		tortories =  tortories->next;
		hare = hare->next->next;
		if (tortoise == hare)
		{
			tortoise = head;
			break;
		}
	}
	if (!torrtoise || !hare || !hare->next)
		return (NULL);
	while (tortoise != hare)
	{
		tortoise = tortoise->next;
		hare = hare->next;
	}

	return (hare);

}

