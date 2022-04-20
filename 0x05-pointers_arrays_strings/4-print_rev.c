#include "main.h"

/**
 * print_rev - function to print a string in reverse
 * @s: string to be printed
 */

void print_rev(char *s)
{
	int i;

	for (i = -1; s[i] != '\0'; i--)
		_putchar(str[i]);
	_putchar('\n');
}
