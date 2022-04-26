#include "main.h"

/**
 * _strspn - function to get the length of a prefix substring
 * @s: string in question
 * @accept: to check
 *
 * Return: i
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (!accept[j])
			break;
	}
	return (i);
}
