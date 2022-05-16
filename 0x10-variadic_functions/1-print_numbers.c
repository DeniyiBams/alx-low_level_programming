#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - to print numbers seperated
 * @seperator: string to be printed between numbers
 * @n: number of integers passed
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arguments;

	va_start(arguments, n);

	for (i = 1; i <= n; i++)
	{
		printf("%i", va_arg(arguments, int));
		if (i < n && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arguments);
}
