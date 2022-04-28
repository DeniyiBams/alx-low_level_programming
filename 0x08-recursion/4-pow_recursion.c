#include "main.h"

/**
 * _pow_recursion - function to return the value of the power of an integer
 * based on another integer
 * @x: integer in question
 * @y: integer to be raised
 *
 * Return: the value of x
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(int x, int (y - 1)));
}
