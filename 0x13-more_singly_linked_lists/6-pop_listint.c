#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - delete head of the linked list
 * @head: head node
 * Return: deleted node
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp = *head;

	if (*head == NULL)
		return (0);

	if (temp != NULL)
	{
		*head = temp->next;
		n = temp->n;
		free(temp);
	}
	return (n);
}
