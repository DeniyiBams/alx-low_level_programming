#include "main.h"

/**
 * _sqrt_recursion - function to return the natural square root of a number
 * @n: number in question
 * @a: integer from sqrt_check function
 * @b: integer from sqrt_check function
 * Return: the natural square root of a number
 */

int sqrt_check(int a, int b);

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_check(1, n));
}

/**
 * sqrt_check - to check for the squareroot of a number
 * @a: first integer
 * @b: second integer
 * Return: square root of a number
 */

int sqrt_check(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (sqrt_check(a + 1, b));
}
