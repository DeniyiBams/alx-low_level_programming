#include <stdlib.h>
#include "lists.h"

/**
  * free_list - function to free a list_t list
  * @head: pointer to add
  * Return: void
  */

void free_list(list_t *head)
{
	list_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
