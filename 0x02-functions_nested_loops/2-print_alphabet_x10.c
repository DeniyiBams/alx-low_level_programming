#include "main.h"

/**
 * Print alphabet_x10 - prints 10 times the alphabet, in lowercase
 */

void print_alphabet_x10(void)
{
	int num = 10;
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(num, letter);
	}

	_putchar('\n');
}
