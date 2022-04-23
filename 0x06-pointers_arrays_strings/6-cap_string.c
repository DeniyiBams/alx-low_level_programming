#include "main.h"

/**
 * cap_string - function to capitalize all words of a string.
 * @dest: string
 */

char *cap_string(char *dest)
{
	int i, j;
	int a[] = {32, 125, 123, 41, 40, 34, 63, 33, 46, 59, 44, 10, 9};

	for (i = 0; dest[i] != '\0'; i++)
	{
		if (dest[i] >= 'a' && dest[i] <= 'z')
			if (i == 0)
				dest[i] = dest[i] - 32;
			else
				for (j = 0; j < 13; j++)
				{
					if (a[j] == dest[i - 1])
						dest[i] = dest[i] - 32;
				}
	}
}
