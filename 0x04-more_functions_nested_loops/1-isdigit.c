#include "main.h"

/**
 * _isdigit - Check if input is a number
 * @c: input given to check.
 * Return: 1 if is a number, 0 if otherwise.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}
