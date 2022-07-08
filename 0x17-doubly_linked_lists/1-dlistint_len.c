#include "lists.h"

/**
  * dlistint_len - returns the number of element in linked list
  * @h: pointer to head
  * Return: number of elements
  */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
