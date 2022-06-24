#include "main.h"

/**
 * is_prime - detects if a number is prime.
 * @n: input number.
 * @c: iterator.
 * Return: 1 if n is a prime number, 0 otherwise.
 */
int is_prime(int n, int c)
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime(n, c + 1));
}
/**
 * _is_prime_number - detects if an input number is a prime number.
 * @n: input number.
 * Return: 1 if n is prime number. 0 otherwise.
 */
int _is_prime_number(int n)
{
	if (n == 0)
		return (0);
	else if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	return (is_prime(n, 2));
}
