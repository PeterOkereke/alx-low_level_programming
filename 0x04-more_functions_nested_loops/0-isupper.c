#include "main.h"

/**
 * _isupper - main function.
 * @c: Integer to be checked.
 * Return: If c is uppercase, 0 if otherwise.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
