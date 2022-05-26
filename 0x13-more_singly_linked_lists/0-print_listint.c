#include <stdio.h>
#include "lists.h"

/**
  * print_listint - prints all elements of a list
  * @h: pointer to list
  * Return: elements
  */

size_t print_listint(const listint_t *h)
{
	unsigned int i;

	listint_t *temp = h;

	for (i = 0; temp != NULL; i++)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}

	return (i);
}
