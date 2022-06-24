#include "main.h"

/**
 * power_square - Returns the natural square root of a number.
 * @n: input number
 * @c: iterator
 * Return: square root or -1.
 */
int power_square(int n, int c)
{
	if (c % (n / c) == 0)
	{
		if (c * (n / c) == n)
			return (c);
		else
			return (-1);
	}
	return (0 + power_square(n, c + 1));
}
/**
 * _sqrt_recursion - returns natural square root of a given number.
 * @n: input number
 * Return: natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (power_square(n, 2));
}
