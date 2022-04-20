#include "main.h"

/**
 * puts_half - function to print the second half of a string
 * @str: string to be printed
 */

void puts_half(char *str)
{
	int i, j, k;

	for (i = 0; str[i] != '\0'; i++)
		;
	if (i % 2 == 0)
	{
		k = i / 2;
		for (j = k; str[j] != '\0'; j++)
		       _putchar(str[j]);
	}
	else
	{
		k = (i - 1) / 2;
		for (j = k; str[j] != '\0'; j++)
			_putchar(str[j]);
	}
	_putchar('\n');
}
