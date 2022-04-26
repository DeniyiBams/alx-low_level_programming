#include "main.h"

/**
 * _strchr - function to locate a character in a string
 * @c: character to be located
 *
 * Return: pointer to the first occurrence of the character c
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s[i]);
	}
	if (s[i] == c)
		return (s);
	else
		return (0);
}
