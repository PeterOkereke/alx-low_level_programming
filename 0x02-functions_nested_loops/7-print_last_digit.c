#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: Number to extract last digit from.
 * Return: Last digit of a number.
 */
int print_last_digit(int n)
{
	int d;

	if (n < 0)
		n = -n;

	d = n % 10;

	if (d < 0)
		d = -d;

	putchar(d + '0');
	
	return (d);
}
