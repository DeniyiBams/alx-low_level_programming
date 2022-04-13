#include "main.h"

/**
 * print_to_98 - To print all natural numbers to 98
 * @n: number in question.
 */

void print_to_98(int n)
{
	for (n = 0; n <= 98; n++)
	{
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
		
		if (n < 0)
		{
			n++;
		}
		else if (n > 98)
			n--;
	}
}
