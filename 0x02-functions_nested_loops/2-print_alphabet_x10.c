#include "main.h"

/**
 * Print alphabet_x10 - prints 10 times the alphabet, in lowercase
 */

void print_alphabet_x10(void)
{
	int num = 10;
	char letter;
	int result;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		result = num * letter;
		_putchar(result);
	}

	_putchar('\n');
}
