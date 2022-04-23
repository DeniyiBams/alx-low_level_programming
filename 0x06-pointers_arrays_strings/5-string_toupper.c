#include "main.h"

/**
 * string_toupper - function to change all lowercase letters to uppercase
 * @dest: string
 *
 * Return: dest
 */

char *string_toupper(char *dest)
{
	int i;

	for (i = 0; dest[i] != '\0'; i++)
	{
		if (dest[i] >= 'a' && dest[i] <= 'z')
			dest[i] = dest[i] - 32;
	}
	return (dest);
}
