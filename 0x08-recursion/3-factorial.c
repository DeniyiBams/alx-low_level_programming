#include "main.h"

/**
 * factorial - function to return the factorial of a number
 * @n: number in question
 *
 * Return: factorial of the number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
