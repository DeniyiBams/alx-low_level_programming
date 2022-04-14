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
		while (sign <= n)
		{
			_putchar('_');
			i++;
		}
	}
	else
		_putchar('\n');
	
	_putchar('/n');
}
