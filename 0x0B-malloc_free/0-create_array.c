#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars and initializes with a specific char
 * @size: specified size
 * @c: character
 *
 * Return: pointer to the array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *size_tot;

	if (size == 0)
		return (NULL);

	size_tot = malloc(sizeof(char) * size);
	if (size_tot == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		size_tot[i] = c;
	return (size_tot);
}
