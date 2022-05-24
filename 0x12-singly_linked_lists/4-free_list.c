#include <stdlib.h>
#include "lists.h"

/**
  * free_list - function to free a list_t list
  * @head: pointer to add
  * Return: void
  */

void free_list(list_t *head)
{
	list_t *next, *current;

	current = head;

	while (current != NULL)
	{
		next = current;
		free(current->str);
		free(current);
		current = next->next;
	}
}
