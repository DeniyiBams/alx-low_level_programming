#include "main.h"

/**
 * _atoi - print the integer of a char
 * @s: char in question
 * Return: integer
 */

int _atoi(char *s)
{
	unsigned int count, i, j, k, l, length, num;
	int aux;

	aux = 1;
	count = 0;
	num = 0;

	while (s[count] != '\0')
		count++;
	for (i = 0; i < count; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
			break;
	}
	for (j = i; j < count; j++)
	{
		if (!(s[j] >= '0' && s[j] <= '9'))
			break;
	}

	for (k = 0; k < i; k++)
	{
		if (s[k] == '-')
			aux = -aux;
	}

	length = j - i;
	l = i;

	while (length >= 1)
	{
		num = num * 10 + (s[l] - '0');
		l++;
		length--;
	}
	return (num * aux);
}
