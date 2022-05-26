#include <stdio.h>
#include "lists.h"

/**
  * print_listint - prints all elements of a list
  * @h: pointer to list
  * Return: elements
  */

size_t print_listint(const listint_t *h)
{
	unsigned int i = 0;

	const listint_t *temp = h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		i++;
	}

	return (i);
}
