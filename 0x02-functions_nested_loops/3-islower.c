#include "main.h"

/**
 * _islower - to check for a lowercase character.
 * @c: The character to be checked.
 * Return: returns 1 (success), returns 0 (failure)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}
