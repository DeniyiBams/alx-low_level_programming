#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: destination of the memory
 * @src: source of the memory
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i, j;

	j = 0

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[j] = src[i];
		j++;
	}

	return (dest);
}
