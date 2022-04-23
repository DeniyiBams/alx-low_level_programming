#include "main.h"

/**
 * reverse_array - function to reverse the content of an array
 * @a: array
 * @n: number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int i, j, last_num;

	i = 0;
	last_num = n -1;

	while (i < last_num)
	{
		j = a[i];
		a[i] = a[last_num];
		a[last_num] = j;
		i++;
		last_num--;
	}
}
