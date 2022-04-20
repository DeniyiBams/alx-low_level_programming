#include "main.h"

/**
 * puts2 - function to prints every other character of a string
 * @str: string to be printed
 */

void puts2(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
		;
	for (j = 0; j < i; j = j + 2)
		_putchar(str[j]);
	_putchar('\n');
}
