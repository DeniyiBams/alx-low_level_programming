#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return - Always 0
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 15 == 0)
		{
			printf("FizzBuzz");
			continue;
		}
		else if (n % 3 == 0)
		{
			printf("Fizz");
			continue;
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
			continue;
		}

		if (n != 100)
			printf(" ");
		printf("%d", n);
	}
	printf("\n");

	return (0);
}
