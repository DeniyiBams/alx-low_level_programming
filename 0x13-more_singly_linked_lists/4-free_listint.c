#include <stdlib.h>
#include "lists.h"

/**
  * free_listint - to free listint_t list
  * @head: pointer
  * Return: void
  */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
