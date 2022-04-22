#include "main.h"

/**
 * _strncat - function to concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: number of bytes to printed from src
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	return (dest);
}
