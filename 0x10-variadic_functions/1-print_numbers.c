#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - to print numbers seperated by a seperator
 * @seperator: string to be printed between numbers
 * @n: number of integers passed
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
        unsigned int i;
	int x;
        va_list args;

        va_start(args, n);

        if (seperator != NULL)
        {
                for (i = 0; i < n; i++)
                {
                        x = va_arg(args, int);
                        printf("%d", x);
                        if (i < n - 1)
                            printf("%s", seperator);
                }
        }
        printf("\n");
	va_end(args);
}
