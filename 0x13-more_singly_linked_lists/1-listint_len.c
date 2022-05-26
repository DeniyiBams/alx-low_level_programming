#include <stddef.h>
#include "lists.h"

/**
  * listint_len - returns the number of elements
  * @h: pointer
  * Return: number of elements
  */

size_t listint_len(const listint_t *h)
{
	unsigned int count = 0;
	const listint_t *temp = h;

	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}

	return (count);
}
