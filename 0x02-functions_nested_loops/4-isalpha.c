#include "main.h"

/**
 * _isalpha: To check for alphabetic character
 * @c: character to checked
 * Return: return 1 for success, 0 for otherwise.
 */

int _isalpha(int c);
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
