#include <stdlib.h>
#include "lists.h"

/**
  * add_nodeint - adds new node
  * @head: pointer
  * @n: value of new node
  * Return: list
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new != NULL)
	{
		new->n = n;
		new->next = *head;
		*head = new;
		return (*head);
	}
	else
		return (NULL);
}
