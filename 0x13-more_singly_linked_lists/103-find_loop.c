#include <stdlib.h>
#include "lists.h"

/**
  * find_listint_loop - to find the loop in a linked list
  * @head: pointer to node
  * Return: address of the node where the loop starts or NULL
  */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise, *hare;

	tortoise = hare = head;

	if (!tortoise || !hare || !hare->next)
		return (NULL);
	while (tortoise && hare && hare->next)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;

		if (tortoise == hare)
		{
			tortoise = head;
			break;
		}
	}
	while (tortoise != hare)
	{
		tortoise = tortoise->next;
		hare = hare->next;
	}

	return (hare);
}

