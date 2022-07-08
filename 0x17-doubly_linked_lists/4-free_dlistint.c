#include "lists.h"

/**
  * free_dlistint - fress a linked list
  * @head: pointer to head
  */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
