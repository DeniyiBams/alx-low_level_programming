#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index -  returns the nth node of a listint_t
 * @head: pointer to head in function
 * @index: index of the node, starting at 0
 * Return: nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0, nodes;
	listint_t *temp = head;

	if (head == NULL)
		return (NULL);

	for (nodes = 0; temp != NULL; nodes++)
		temp = temp->next;
	if (index > nodes)
		return (NULL);

	temp = head;
	while (counter <= index)
	{
		if (counter == index)
			return (temp);
		temp = temp->next;
		counter++;
	}
	return (NULL);
}
