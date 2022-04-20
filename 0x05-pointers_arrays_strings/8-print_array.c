#include "main.h"
#include <stdio.h>

/**
 * print_array - function to prints n elements of an array of integers
 * @a: integer to be printed
 * @n: number of elements of array to be printed
 */

void print_array(int *a, int n)
{
	int i = 0;
	int j;

	while (a[i] != '\0')
		i++;

	j = 0;

	while (j < i && j < n)
	{
		printf("%d, ", a[j]);

		if (j < n - 1)
			printf(", ");
		j++;
	}
	printf("\n");
}
