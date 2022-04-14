#include "main.h"

/**
 * print_line
 * @n: number of times entered
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		while (i <= n)
		{
			_putchar('_');
			i++;
		}

		_putchar('_');
	}
	else
		_putchar('\n');
}
