#include "main.h"

/**
 * _strcpy - function to copy a string to the buffer pointed to another string
 * @dest: first string
 * @src: second string
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int n = 0;
	int i, j;

	while (src[n] != '\0')
		n++;

	i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	i = i;

	while (i <= n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
