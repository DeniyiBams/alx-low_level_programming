#include "main.h"

/**
 * _strcmp - function to compare two strings
 * @s1: first string
 * @s2: second string
 */

int _strcmp(char *s1, char *s2)
{
	int i, j;

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	if (i > j)
		return (15);
	else if (i < j)
		return (-15);
	else
		return (0);
}
