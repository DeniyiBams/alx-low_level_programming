#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @s: memory space to be filled
 * @b: byte to fill
 * @n: number of space
 *
 * Return: pointer to memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
