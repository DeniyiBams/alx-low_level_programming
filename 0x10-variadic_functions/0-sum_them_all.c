#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function to sum all of its parameters
 * @n: number of parameters
 *
 * Return: 0 if n is 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int i;
	int sum = 0;
	va_list args;
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (n == 0)
			return (0);
		int x = va_arg(args, int);
		sum += x;
	}
	va_end(args);
	printf("%d", sum);
}
