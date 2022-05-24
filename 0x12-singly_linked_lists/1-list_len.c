#include "lists.h"

/**
  * list_len - to return the number of elements in a linked list_t lit
  * @h: pointer to address
  * Return: number of elements
  */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
