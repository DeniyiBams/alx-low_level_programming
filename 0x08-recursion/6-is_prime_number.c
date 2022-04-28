#include "main.h"

/**
 * prime_check - checks if a number is prime
 * @n: natural number
 * @i: counter
 *
 * Return: 1 if prime, else 0
 */

int prime_check(int n, int i)
{
	if (n % i == 0)
		return (0);
	else if (i == (n - 1) && n % i != 0)
		return (1);
	else
		return (prime_check(n, i + 1));
}

/**
 * is_prime_number - to check for prime number
 * @n: natural number
 *
 * Return: 1 if prime, else 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (n == 2)
		return (1);
	else
		return (prime_check(n, 2));
}
