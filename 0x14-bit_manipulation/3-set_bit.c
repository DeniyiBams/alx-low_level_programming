#include <stdlib.h>
#include "main.h"

/**
  * set_bit - sets the value of a bit to 1 at a given index
  * @n: number
  * @index: index
  * Return: 1 if success, -1 if an error occured
  */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set = 0;

	if (index > 63)
		return (-1);

	set = 1 << index;
	*n = *n | set;

	return (1);
}
