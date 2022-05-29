#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
  * free_listint_safe - frees a listint_t list
  * @h: pointer
  * Return: size of the list that was freed
  */

size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *temp, *head;
	size_t hI, t;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;
	head = *h;
	hI = 0;

	while (head != NULL)
	{
		temp = *h;

		for (t = 0; t < hI; t++)
		{
			if (temp == current)
			{
				*h = NULL;

				return (hI);
			}

			temp = temp->next;
		}
		current = head->next;

		free(head);
		head = current;
		hI++;
	}
	*h = NULL;
	return (hI);
}
