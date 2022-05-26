#include <stdlib.h>
#include "lists.h"

/**
  * free_listint2 - to free listint_t list
  * @head: pointer
  * Return: void
  */

void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *next;

	if (head == NULL)
		return;
	if (*head == NULL)
		return;

	current = *head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}
