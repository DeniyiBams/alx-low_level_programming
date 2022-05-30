#include <stdlib.h>
#include "main.h"

/**
  * print_binary - prints the binary representation of a num
  * @n: number in question
  * Return: void
  */

void print_binary(unsigned long int n)
{
	int i, j;
	unsigned long int value, extract = 0;

	if (n == 0)
		_putchar('0');

	value = n;

	for (j = 0; value != 0; j++)
		value = value >> 1;
	for (i = j - 1; i >= 0; i--)
	{
		extract = 1 << 1;

		if ((n & extract) != 0)
			_putchar('1');
		else
			_putchar('0');
	}
}
