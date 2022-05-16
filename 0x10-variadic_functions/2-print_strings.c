#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - function to print strings
 * @separator: seperator
 * @n: number of strings passed
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
