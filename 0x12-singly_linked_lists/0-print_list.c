#include <stdio.h>
#include "lists.h"

/**
  * print_list - to print all elements of a list_t list
  * @h: pointer to address
  * Return: nodes
  */

size_t print_list(const list_t *h)
{
	unsigned int i;

	if (h == NULL)
		return (0);
	for (i = 0; h != NULL; i++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
	}

	return (i);
}
