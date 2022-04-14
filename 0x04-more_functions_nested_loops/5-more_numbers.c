#include "main.h"

/**
 * more_numbers - prints 10 times the number
 */

void more_numbers(void)
{
	int num;
	int count = '0';

	while (count != '9')
	{
		for (num = '0'; num <= '14'; num++)
			_putchar(num);
		_putchar('\n');
		
		count++;
	}
	_putchar('\n');
}
