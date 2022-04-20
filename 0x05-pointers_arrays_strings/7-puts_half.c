#include "main.h"

/**
 * puts_half - function to print the second half of a string
 * @str: string to be printed
 */

void puts_half(char *str)
{
	int i = 0;
	int j;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
		i = i / 2;
	else
		i = (i + 1) / 2;
	while (str[i] != '\0')
	{
		j = str[i];
		i++;
		_putchar(j);
	}
	_putchar('\n');
}
